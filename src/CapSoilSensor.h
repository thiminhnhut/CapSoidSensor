#ifndef CapSoilSensor_h
#define CapSoilSensor_h

#include <Arduino.h>

class CapSoilSensor {
public:
    CapSoilSensor(uint8_t pin);
    float getData();
private:
    unsigned short int maxValue = 700;
    unsigned short int minValue = 0;
    uint8_t _pin;
};
#endif
