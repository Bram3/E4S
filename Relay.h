#pragma once

#include <Arduino.h>
#include <Pins.h>
class Relay
{
    bool *serout;
    byte pin;
    bool state;
    void update();

public:
    Relay(byte pin, bool *serout);
    void turnOn();
    void turnOff();
    void toggle();
    bool isOn();
};