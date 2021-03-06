// Require and initialise PhantomCSS module. Paths are relative to CasperJs
// directory.
var phantomcss = require('./node_modules/phantomcss/phantomcss.js');

phantomcss.init({
  libraryRoot: './node_modules/phantomcss'
});

casper.start('http://localhost:9000/books.html');

casper.viewport(1024, 768);


casper.then(function() {
  this.echo('Verify menu bar');
  phantomcss.screenshot('.top-navigation', 'top-navigation');

  this.echo('Verify site name');
  phantomcss.screenshot('.site-name', 'site-name');

  this.echo('Verify the books filter');
  phantomcss.screenshot('.books-filter', 'books-filter');

  this.echo('Verify the footer icons nav');
  phantomcss.screenshot('.icons-nav', 'icons-nav');

  this.echo('Verify the bottom nav');
  phantomcss.screenshot('.login-area', 'login-area');
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
