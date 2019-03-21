#include <Arduino.h>
#include <CapSoilSensor.h>

#define debug_port Serial
#define BAUD_RATE 115200
#define PIN_CAP_SOIL_MOISTURE_SENSOR A0

CapSoilSensor sensor(PIN_CAP_SOIL_MOISTURE_SENSOR);

void setup() {
    debug_port.begin(BAUD_RATE);
}

void loop() {
    debug_port.printf("Humi = %f\n", sensor.getData());
    delay(1000);
}
