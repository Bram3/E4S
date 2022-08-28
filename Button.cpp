#include <Button.h>

Button::Button(int pin) : mPin(pin) { pinMode(this->mPin, INPUT); }

void Button::updateReading() {

  int newReading = digitalRead(this->mPin);

  if (newReading != this->mLastReading) {
    this->mLastDebounceTime = millis();
  }
  if (millis() - this->mLastDebounceTime > DEBOUNCE_DELAY) {
    this->mState = newReading;
  }
  this->mLastReading = newReading;
}

bool Button::read() {
  this->updateReading();
  return this->mState;
}