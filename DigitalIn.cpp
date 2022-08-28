#include <DigitalInput.h>

DigitalInput::DigitalInput(Mux &mux, int pin) : mMux(mux), mPin(pin) {}

bool DigitalInput::read() {
  bool *muxInputs = this->mMux.read();
  return muxInputs[this->mPin];
}