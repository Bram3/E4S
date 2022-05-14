# E4S

## Table of Contents

[Installation](#installation)  
[Example Usage](#example-usage)  
[Pins List](#pins-list)

## Installation

1. Download latest release https://github.com/Bram3/E4S/releases
2. Arduino IDE:

- Sketch > Include Library > Add .ZIP Library...
- Select the .ZIP

3. PlatformIO:

- Place the .ZIP in the lib folder of your project

## Example Usage

```cpp
#include <E4S.h>

// Use this for all the components that use the shift register
bool serout[24];

//Relay
Relay relay1 = Relay(Relay1Pin, serout);

relay1.turnOn();
relay1.turnOff();
relay1.toggle();

//Digtal Input
DigitalIn sensor = DigitalIn(DigitalInputP0Pin);

bool enabled = sensor.readInput();

// Button
Button button = Button(DigitalDirectInput0Pin);

bool pressed = button.isPressed();

// 7 Segment Display
Segment7 segment7 = Segment7(serout);

segment7.number(9, 1);
segment7.clear();

// Rgb 
Rgb rgb = Rgb(serout);
rgb.red();
rgb.blue();
rgb.green();

```

## Pins List

| Pin  | Component                |
| ---- | ------------------------ |
| 15   | MUX Input Selection A0   |
| 0    | MUX Input Selection A1   |
| 5    | MUX Input Selection A2   |
| 14   | MUX Input Selection A3   |
| 39   | MUX Data In              |
| 34   | AD-Converter 1 Input     |
| 35   | AD-Converter 2 Input     |
| 36   | AD-Converter 3 Input     |
| 26   | DA-Converter Output      |
| 13   | Shift Register STROBE    |
| 4    | Shift Register DATA      |
| 23   | Shift Register CLOCK     |
| 2    | White On-Board-LED       |
| 12   | Buzzer                   |
| 0x27 | Lcd Base Address         |
| 0x4A | TemperatureAddress       |
| 23   | Relay 1                  |
| 22   | Relay 2                  |
| 21   | Relay 3                  |
| 20   | Relay 4                  |
| 19   | Relay 5                  |
| 18   | Relay 6                  |
| 17   | Relay 7                  |
| 16   | Relay 8                  |
| 32   | Digital Direct Input 0   |
| 33   | Digital Direct Input 1   |
| 25   | Digital Direct Input 2   |
| 27   | Digital Direct Input 3   |
| 16   | Digital Direct Output 0  |
| 17   | Digital Direct Output 1  |
| 18   | Digital Direct Output 2  |
| 19   | Digital Direct Output 3  |
| 0    | Digital Input Negative 0 |
| 1    | Digital Input Negative 1 |
| 2    | Digital Input Negative 2 |
| 3    | Digital Input Negative 3 |
| 4    | Digital Input Negative 4 |
| 5    | Digital Input Negative 5 |
| 6    | Digital Input Negative 6 |
| 7    | Digital Input Negative 7 |
| 8    | Digital Input Positive 0 |
| 9    | Digital Input Positive 1 |
| 10   | Digital Input Positive 2 |
| 11   | Digital Input Positive 3 |
| 12   | Digital Input Positive 4 |
| 13   | Digital Input Positive 5 |
| 14   | Digital Input Positive 6 |
| 15   | Digital Input Positive 7 |
