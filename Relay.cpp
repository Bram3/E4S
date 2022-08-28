#include <Relay.h>

Relay::Relay(ShiftRegister &shiftRegister, int pin)
    : mShiftRegister(shiftRegister), mPin(pin) {}

void Relay::write(int state) { this->mShiftRegister.write(this->mPin, state); }

bool Relay::read() { return this->mShiftRegister.read(this->mPin); }