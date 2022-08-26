#pragma once
#include <Output.h>
#include <ShiftRegister.h>

class Relay : public Output {
  ShiftRegister &mShiftRegister;
  int mPin;

public:
  Relay(ShiftRegister &shiftRegister, int pin);

  void write(int state);
  bool read();
};