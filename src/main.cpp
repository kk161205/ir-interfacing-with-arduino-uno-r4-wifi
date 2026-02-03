#include <Arduino.h>
#define irPin 2
void setup() {
    pinMode(irPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    int irValue = digitalRead(irPin);
    if (irValue == HIGH) {
        Serial.println("IR SENSOR: NO Obstacles ");
    }else {
        Serial.println("IR SENSOR: Obstacles detected");
    }
    delay(500);
}