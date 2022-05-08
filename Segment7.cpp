#include <Segment7.h>

Segment7::Segment7(bool *serout)
{
    this->serout = serout;
}

void Segment7::number(int number, int seg)
{
    // Only leave first digit
    while (number >= 10)
        number /= 10;

    if (seg > 4)
    {
        seg = 4;
    }

    for (int i = 0; i < 5; i++)
    {
        serout[i + 3] = 0;
    }

    int pos = 8 - seg;

    serout[pos] = 1;

    for (int i = 15; i > 8; i--)
    {
        serout[i] = numberChars[number][15 - i];
    }
    serout[8] = 1;
    update();
}

void Segment7::clear()
{
    for (int i = 15; i > 8; i--)
    {
        serout[i] = 0;
    }
    serout[8] = 0;
}

void Segment7::update()
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