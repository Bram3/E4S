#pragma once

#include <Arduino.h>

class SimpleOutput {
  int mPin;

public:
  SimpleOutput(int pin);
  void writeDigital(int state);
  void writeAnalog(int value);
};