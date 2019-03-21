#include "CapSoilSensor.h"

CapSoilSensor::CapSoilSensor(uint8_t pin) {
    _pin = pin;
}

float CapSoilSensor::getData() {
    unsigned short int value = analogRead(_pin);
    return map(value, maxValue, minValue, 0, 100);
}
