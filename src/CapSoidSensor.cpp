#include "CapSoidSensor.h"

CapSoidSensor::CapSoidSensor(uint8_t pin) {
    _pin = pin;
}

float CapSoidSensor::getData() {
    unsigned short int value = analogRead(_pin);
    return map(value, maxValue, minValue, 0, 100);
}
