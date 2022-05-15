#include <Relay.h>

Relay::Relay(byte pin, bool *serout)
{
    this->pin = pin;
    this->serout = serout;
    this->state = 0;
    pinMode(ShiftRegDataPin, OUTPUT);
    pinMode(ShiftRegClkPin, OUTPUT);
    pinMode(ShiftRegStrbPin, OUTPUT);
    for (int k = 0; k < 24; k++)
    {
        digitalWrite(serout[k], LOW);
    }
    update();
}

void Relay::turnOn()
{
    state = 1;
    serout[(unsigned int)pin] = state;
    update();
}

void Relay::turnOff()
{
    state = 0;
    serout[(unsigned int)pin] = state;
    update();
}

void Relay::toggle()
{
    state = !state;
    serout[(unsigned int)pin] = state;
    update();
}

bool Relay::isOn()
{
    return serout[(unsigned int)pin];
}

void Relay::update()
{
    digitalWrite(ShiftRegStrbPin, LOW);
    digitalWrite(ShiftRegClkPin, LOW);
    for (int i = 0; i < 24; i++)
    {
        digitalWrite(ShiftRegDataPin, this->serout[i]);
        delayMicroseconds(10);
        digitalWrite(ShiftRegClkPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(ShiftRegClkPin, LOW);
        delayMicroseconds(10);
    }
    digitalWrite(ShiftRegStrbPin, HIGH);
}