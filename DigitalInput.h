#pragma once

#include <Arduino.h>
#include <Mux.h>

class DigitalInput {

private:
  int mPin;
  Mux &mMux;

public:
  DigitalInput(Mux &mux, int pin);
  bool read();
};