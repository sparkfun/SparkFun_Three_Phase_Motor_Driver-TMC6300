// BLDC driver standalone example
#include <SimpleFOC.h>

// BLDC driver instance
BLDCDriver6PWM driver = BLDCDriver6PWM(5, 6, 9,10, 3, 11);

void setup() {

  // pwm frequency to be used [Hz]
  // for atmega328 fixed to 32kHz
  // esp32/stm32/teensy configurable
  driver.pwm_frequency = 32000;
  // power supply voltage [V]
  driver.voltage_power_supply = 5;
  // Max DC voltage allowed - default voltage_power_supply
  driver.voltage_limit = 5;
  // daad_zone [0,1] - default 0.02f - 2%
  driver.dead_zone = 0.05f;

  // driver init
  driver.init();

  // enable driver
  driver.enable();

  _delay(1000);
}

void loop() {
    driver.setPwm(5,0,0);
    _delay(1000);
    
    driver.setPwm(0,5,0);
    _delay(1000);
}