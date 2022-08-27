#pragma once

class SimpleOutput {
  int mPin;

public:
  SimpleOutput(int pin);
  void write(int state);
};