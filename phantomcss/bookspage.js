// Require and initialise PhantomCSS module. Paths are relative to CasperJs
// directory.
var phantomcss = require('./node_modules/phantomcss/phantomcss.js');

phantomcss.init({
  libraryRoot: './node_modules/phantomcss'
  // Reduce the default tolerance, to allow for different fonts to be created
  // on different systems.
  // Note that screenshots were created on an Ubuntu system, thus they might
  // fail when tested locally on other machines (e.g. Mac OSX)
  // mismatchTolerance: 1
});

casper.start('http://localhost:9000/books.html');

casper.viewport(1024, 768);


casper.then(function() {
  this.echo('Verify menu bar');
  phantomcss.screenshot('.top-navigation', 'top-navigation');

  this.echo('Verify site name');
  phantomcss.screenshot('.site-name', 'site-name');

  this.echo('Verify the books-filter');
  phantomcss.screenshot('.books-filter', 'books-filter');

  this.echo('Verify the footer icons nav');
  phantomcss.screenshot('.icons-nav', 'icons-nav');

});

casper.then( function now_check_the_screenshots(){
  // Compare screenshots.
  phantomcss.compareAll();
});

casper.then( function end_it(){
  casper.test.done();
});

// Run tests.
casper.run(function(){
  console.log('\nTHE END.');
  phantom.exit(phantomcss.getExitStatus());
});
