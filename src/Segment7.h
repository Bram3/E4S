#pragma once

#include <Arduino.h>
#include <ShiftRegister.h>

class Segment7 {
  ShiftRegister &mShiftRegister;
  int numbers[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0},
                        {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                        {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                        {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
                        {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

public:
  Segment7(ShiftRegister &shiftRegister);
  ~Segment7();
  void turnOnDigit(int seg);
  void turnOffDigit(int seg);
  void displayNum(int number, int seg);
  void displayNums(int number1, int number2, int number3, int number4,
                   int delay);
};