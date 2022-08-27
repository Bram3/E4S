#include <Button.h>

Button::Button(int pin) {
  this->mPin = pin;
  this->mLastReading = 0;
  pinMode(this->mPin, INPUT);
}

void Button::updateReading() {

  int newReading = digitalRead(this->mPin);

  if (newReading != this->mLastReading) {
    this->mLastDebounceTime = millis();
  }
  if (millis() - this->mLastDebounceTime > this->mDebounceDelay) {
    this->mState = newReading;
  }
  this->mLastReading = newReading;
}

bool Button::read() {
  this->updateReading();
  return this->mState;
}