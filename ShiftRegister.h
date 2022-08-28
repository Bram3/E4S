#pragma once

#include <Arduino.h>
#include <Pins.h>

class ShiftRegister {
  bool mOutputs[24];
  void update();

public:
  ShiftRegister();
  void write(int pin, int state);
  int read(int pin);
};