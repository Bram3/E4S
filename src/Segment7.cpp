#include <Segment7.h>

Segment7::Segment7(ShiftRegister &shiftRegister)
    : mShiftRegister(shiftRegister) {
  this->mShiftRegister.write(8, 1);
};

Segment7::~Segment7() { this->mShiftRegister.write(8, 0); }

void Segment7::turnOnDigit(int seg) { this->mShiftRegister.write(8 - seg, 1); }

void Segment7::turnOffDigit(int seg) { this->mShiftRegister.write(8 - seg, 0); }

void Segment7::displayNum(int number, int seg) {

  for (int i = 0; i < 5; i++) {
    this->mShiftRegister.write(i + 3, 0);
  }
  this->turnOnDigit(seg);
  for (int i = 15; i > 8; i--) {
    this->mShiftRegister.write(i, numbers[number][15 - i]);
  }
}

void Segment7::displayNums(int number1, int number2, int number3, int number4,
                           int delaySeconds) {

  unsigned long start = millis();

  while (true) {

    displayNum(number1, 1);
    while (millis() < start + delaySeconds) {
    }
    displayNum(number2, 2);
    while (millis() < start + delaySeconds * 2) {
    }
    displayNum(number3, 3);
    while (millis() < start + delaySeconds * 3) {
    }
    displayNum(number4, 4);
    while (millis() < start + delaySeconds * 4) {
    }
    start = millis();
  }
}
