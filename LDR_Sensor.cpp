#include "LDR_Sensor.h"

LDR_Sensor::LDR_Sensor(int pin) {
  _pin = pin;
}

void LDR_Sensor::begin() {
  // Initialize the pin as an input
  pinMode(_pin, INPUT);
}

int LDR_Sensor::read() {
  // Read the analog value of the LDR sensor
  int value = analogRead(_pin);
  return value;
}
