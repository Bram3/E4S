#include <ShiftRegister.h>

ShiftRegister::ShiftRegister() {
  pinMode(ShiftRegDataPin, OUTPUT);
  pinMode(ShiftRegClkPin, OUTPUT);
  pinMode(ShiftRegStrbPin, OUTPUT);
  for (int i = 0; i < 24; i++) {
    digitalWrite(this->mOutputs[i], LOW);
  }
  this->update();
}

void ShiftRegister::write(int pin, int state) {
  this->mOutputs[pin] = state;
  this->update();
}

int ShiftRegister::read(int pin) { return this->mOutputs[pin]; }

void ShiftRegister::update() {
  digitalWrite(ShiftRegStrbPin, LOW);
  digitalWrite(ShiftRegClkPin, LOW);
  for (int i = 0; i < 24; i++) {
    digitalWrite(ShiftRegDataPin, this->mOutputs[i]);
    delayMicroseconds(10);
    digitalWrite(ShiftRegClkPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(ShiftRegClkPin, LOW);
    delayMicroseconds(10);
  }
  digitalWrite(ShiftRegStrbPin, HIGH);
}