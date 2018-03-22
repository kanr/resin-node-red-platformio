var Gpio = require('onoff').Gpio;
var LED = new Gpio(3, 'out');
LED.writeSync(0);
