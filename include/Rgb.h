#pragma once

#include <Arduino.h>
#include <Pins.h>
#include <ShiftRegister.h>

class Rgb {
  ShiftRegister &mShiftRegister;

public:
  Rgb(ShiftRegister &shiftRegister);
  void write(int red, int blue, int green);
};