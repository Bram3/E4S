#pragma once

#include <Arduino.h>

class Button {

private:
  int mPin;
  int mState;
  int mLastReading;
  unsigned long mLastDebounceTime = 0;
  unsigned long mDebounceDelay = 50;
  void updateReading();

public:
  Button(int pin);
  bool read();
};