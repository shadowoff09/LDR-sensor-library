#ifndef LDR_SENSOR_H
#define LDR_SENSOR_H

#include <Arduino.h>

class LDR_Sensor {
  public:
    LDR_Sensor(int pin);
    void begin();
    int read();
    
  private:
    int _pin;
};

#endif
