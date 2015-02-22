var WebdriverIO = require('webdriverio'),
  WebdriverCSS = require('webdrivercss');

var caps;
caps = {
  'browserName': 'chrome'
};

caps['name'] = caps.browserName;

var url;

if (true) {
// if (process.env.BROWSERSTACK_USERNAME) {
  // caps['user'] = 'amitaibu';
  // caps['key'] = '8b4285d8-49e2-404a-8cb5-932b0a34971a';
  // caps['browserstack.debug'] = 'true';

  var client = WebdriverIO.remote({
    desiredCapabilities: caps,
    host: 'ondemand.saucelabs.com',
    port: 80,
    user: 'amitaibu',
    key: '8b4285d8-49e2-404a-8cb5-932b0a34971a'
  });

  url = 'http://' + process.env.TRAVIS_COMMIT + '.ngrok.com';
}
else {
  // Local selenium
  var client = WebdriverIO.remote({
    desiredCapabilities: caps
  });
}

WebdriverCSS.init(client);

client
  .init()
  .url(url)
  .webdrivercss(caps.name, {name: 'homepage'})
  .end();
