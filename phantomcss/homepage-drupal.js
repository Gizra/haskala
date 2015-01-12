// Require and initialise PhantomCSS module. Paths are relative to CasperJs
// directory.
var phantomcss = require('./node_modules/phantomcss/phantomcss.js');

phantomcss.init({
  libraryRoot: './node_modules/phantomcss'
});

casper.start('http://127.0.0.1:8080');

casper.viewport(1024, 768);


casper.then(function() {

  this.echo('Verify drupal site name');
  phantomcss.screenshot('.site-name', 'drupal-homepage-site-name');

  this.echo('Verify the drupal content');
  phantomcss.screenshot('.main-content', 'drupal-homepage-main-content');

  this.echo('Verify the drupal search box');
  phantomcss.screenshot('.search', 'drupal-homepage-search');

  this.echo('Verify the drupal tags cloud box');
  phantomcss.screenshot('.tags-cloud-wrapper', 'drupal-homepage-tags-cloud-wrapper');

  this.echo('Verify the drupal footer icons nav');
  phantomcss.screenshot('.icons-nav', 'drupal-homepage-icons-nav');

});

// Check hover states.
casper.then(function() {
  this.echo('Verify drupal menu bar - hover');
  this.mouse.move('.top-navigation .first a');
  phantomcss.screenshot('.top-navigation .first', 'drupal-homepage-top-navigation-hover');
});

casper.then(function() {
    this.echo('Verify drupal tags cloud - hover');
    this.mouse.move('.tags-cloud li a');
    phantomcss.screenshot('.tags-cloud li a', 'drupal-homepage-tags-cloud-hover');
});

casper.then(function() {
  this.echo('Verify drupal icons nav - hover');
  this.mouse.move('.icons-nav .first a');
  phantomcss.screenshot('.icons-nav .first', 'drupal-homepage-icons-nav-hover');
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
