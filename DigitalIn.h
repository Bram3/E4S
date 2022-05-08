#pragma once

#include <Arduino.h>
#include <Mux.h>
class DigitalIn
{
    byte pin;

public:
    DigitalIn(byte pin);
    bool readInput();
};