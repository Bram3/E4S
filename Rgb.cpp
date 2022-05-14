#include <Rgb.h>

Rgb::Rgb(bool *serout)
{
    this->serout = serout;
    pinMode(ShiftRegDataPin, OUTPUT);
    pinMode(ShiftRegClkPin, OUTPUT);
    pinMode(ShiftRegStrbPin, OUTPUT);
    for (int k = 0; k < 24; k++)
    {
        digitalWrite(serout[k], LOW);
    }
    update();
}

void Rgb::red()
{
    serout[2] = true;
    update();
}

void Rgb::blue()
{
    serout[0] = true;
    update();
}

void Rgb::green()
{
    serout[1] = true;
    update();
}

void Rgb::update()
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