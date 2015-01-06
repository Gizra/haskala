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

// Book page.

casper.start('http://localhost:9000/book.html');

casper.viewport(1024, 768);

casper.then(function() {
  this.echo('Verify menu bar');
  phantomcss.screenshot('.top-navigation', 'top-navigation');

  this.echo('Verify site name');
  phantomcss.screenshot('.site-name', 'site-name');

  this.echo('Verify bread crumbs');
  phantomcss.screenshot('.bread-crumbs', 'bread-crumbs');

  this.echo('Verify Hr title');
  phantomcss.screenshot('.hr-title', 'hr-title');

  this.echo('Verify the content');
  phantomcss.screenshot('.main-content', 'main-content');

  this.echo('Verify top details');
  phantomcss.screenshot('.top-details', 'top-details');

  this.echo('Verify bottom details');
  phantomcss.screenshot('.bottom-details', 'bottom-details');

  this.echo('Verify the footer icons nav');
  phantomcss.screenshot('.icons-nav', 'icons-nav');

});

// Check hover states.
casper.then(function() {
  this.echo('Verify menu bar - hover');
  this.mouse.move('.top-navigation .first a');
  phantomcss.screenshot('.top-navigation .first', 'top-navigation-hover');

  this.echo('Verify bread crumbs - hover');
  this.mouse.move('.bread-crumbs .last  a');
  phantomcss.screenshot('.bread-crumbs .last', 'bread-crumbs-hover');

  this.echo('Verify icons nav - hover');
  this.mouse.move('.icons-nav .first a');
  phantomcss.screenshot('.icons-nav .first', 'icons-nav-hover');
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

