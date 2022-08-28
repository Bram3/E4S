#pragma once

#define DEBOUNCE_DELAY 50

#include <Arduino.h>

class Button {

private:
  int mPin;
  int mState;
  int mLastReading = 0;
  unsigned long mLastDebounceTime = 0;
  void updateReading();

public:
  Button(int pin);
  bool read();
};