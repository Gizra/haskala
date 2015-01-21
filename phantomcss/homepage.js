// Require and initialise PhantomCSS module. Paths are relative to CasperJs
// directory.
var phantomcss = require('./node_modules/phantomcss/phantomcss.js');

phantomcss.init({
  libraryRoot: './node_modules/phantomcss'
});

casper.start('http://localhost:9000/');

casper.viewport(1024, 768);


casper.then(function() {
  this.echo('Verify menu bar');
  phantomcss.screenshot('.top-navigation', 'top-navigation');

  this.echo('Verify site name');
  phantomcss.screenshot('.site-name', 'site-name');

  this.echo('Verify the search box');
  phantomcss.screenshot('.search', 'search');

  this.echo('Verify the tags cloud box');
  phantomcss.screenshot('.tags-cloud-wrapper', 'tags-cloud-wrapper');

  this.echo('Verify the footer icons nav');
  phantomcss.screenshot('.icons-nav', 'icons-nav');

  this.echo('Verify the bottom nav');
  phantomcss.screenshot('.login-area', 'login-area');
});


casper.then(function() {
    this.echo('Verify tags cloud - hover');
    this.mouse.move('.tags-cloud li a');
    phantomcss.screenshot('.tags-cloud li a', 'tags-cloud-hover');
});

casper.then(function() {
  this.echo('Verify icons nav - hover');
  this.mouse.move('.icons-nav .first a');
  phantomcss.screenshot('.icons-nav .first', 'icons-nav-hover');
});

casper.then(function() {
  this.echo('Verify menu bar - hover');
  this.mouse.move('.top-navigation .first a');
  phantomcss.screenshot('nav.top-navigation li.first', 'top-navigation-hover');
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
