#include <DigitalIn.h>

DigitalIn::DigitalIn(byte pin)
{
    this->pin = pin;
    pinMode(MuxA0Pin, OUTPUT);
    pinMode(MuxA1Pin, OUTPUT);
    pinMode(MuxA2Pin, OUTPUT);
    pinMode(MuxA3Pin, OUTPUT);
    pinMode(MuxDinPin, INPUT);
}

bool DigitalIn::readInput()
{
    bool *MXi = Mux::readInputs();
    return MXi[(unsigned int)this->pin];
}