var WebdriverIO = require('webdriverio'),
  WebdriverCSS = require('webdrivercss');

var caps;
caps = {
  'browserName': 'chrome'
};

caps['name'] = caps.browserName;

var client = WebdriverIO.remote({
  desiredCapabilities: caps
});


if (process.env.BROWSERSTACK_USERNAME) {
  caps['browserstack.user'] = process.env.BROWSERSTACK_USERNAME;
  caps['browserstack.key'] = process.env.BROWSERSTACK_ACCESS
  caps['browserstack.debug'] = 'true';

  client.host = 'hub.browserstack.com';
  client.port = 80;
}

WebdriverCSS.init(client);

client
  .init()
  // .sync()
  .url('http://localhost:9000')
  .webdrivercss(caps.name, {name: 'homepage'})
  .end();