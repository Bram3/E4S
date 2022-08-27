#include <Arduino.h>
#include <SimpleOutput.h>

SimpleOutput::SimpleOutput(int pin) : mPin(pin) { pinMode(this->mPin, OUTPUT); }

void SimpleOutput::write(int state) { digitalWrite(this->mPin, state); }