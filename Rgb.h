#pragma once

#include <Pins.h>
#include <Arduino.h>
class Rgb
{
    bool *serout;
    void update();

public:
    Rgb(bool *serout);
    void red();
    void green();
    void blue();
};