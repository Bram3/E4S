#pragma once

#include <Arduino.h>

class SimpleOutput {
  int mPin;

public:
  SimpleOutput(int pin);
  void write(int state);
};