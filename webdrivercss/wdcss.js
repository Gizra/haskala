var WebdriverIO = require('webdriverio'),
  WebdriverCSS = require('webdrivercss');

var caps;
caps = {
  'browserName': 'chrome'
};

caps['name'] = caps.browserName;

var url;

if (process.env.BROWSERSTACK_USERNAME) {
  caps['browserstack.user'] = process.env.BROWSERSTACK_USERNAME;
  caps['browserstack.key'] = process.env.BROWSERSTACK_ACCESS;
  caps['browserstack.debug'] = 'true';

  var client = WebdriverIO.remote({
    desiredCapabilities: caps,
    host: 'hub.browserstack.com',
    port: 80
  });

  url = 'http://some-commit.ngrok.com';
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