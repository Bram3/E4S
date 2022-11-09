#include <SimpleOutput.h>

SimpleOutput::SimpleOutput(int pin) : mPin(pin) { pinMode(this->mPin, OUTPUT); }

void SimpleOutput::writeDigital(int state) { digitalWrite(this->mPin, state); }

void SimpleOutput::writeAnalog(int value) { analogWrite(this->mPin, value); }
