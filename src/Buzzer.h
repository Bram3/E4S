#pragma once

#include <Arduino.h>
#include <SimpleOutput.h>

class Buzzer : public SimpleOutput {
  using SimpleOutput::SimpleOutput;

public:
  void buzz(int seconds);
};