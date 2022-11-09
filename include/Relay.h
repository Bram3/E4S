#pragma once

#include <ShiftRegister.h>

class Relay {
  ShiftRegister &mShiftRegister;
  int mPin;

public:
  Relay(ShiftRegister &shiftRegister, int pin);

  void write(int state);
  bool read();
};