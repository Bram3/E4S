#include <Button.h>

Button::Button(byte pin)
{
    this->pin = pin;
    this->lastReading = LOW;
    pinMode(pin, INPUT);
    update();
}

void Button::update()
{

    byte newReading = digitalRead(this->pin);

    if (newReading != this->lastReading)
    {
        this->lastDebounceTime = millis();
    }
    if (millis() - this->lastDebounceTime > this->debounceDelay)
    {
        this->state = newReading;
    }
    this->lastReading = newReading;
}
byte Button::getState()
{
    update();
    return this->state;
}
bool Button::isPressed()
{
    return (getState() == HIGH);
}