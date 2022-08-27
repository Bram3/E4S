#pragma once

#include <Button.h>
#include <DigitalInput.h>
#include <LiquidCrystal_I2C.h>
#include <Mux.h>
#include <Relay.h>
#include <Rgb.h>
#include <Segment7.h>
#include <ShiftRegister.h>
#include <SimpleOutput.h>
#include <Temperature.h>

class E4S {
  ShiftRegister mShiftRegister;
  Mux mMux;

public:
  E4S();

  Relay relay1;
  Relay relay2;
  Relay relay3;
  Relay relay4;
  Relay relay5;
  Relay relay6;
  Relay relay7;
  Relay relay8;

  Segment7 segment7;

  Button button1;
  Button button2;
  Button button3;
  Button button4;

  DigitalInput digitalInputNegative1;
  DigitalInput digitalInputNegative2;
  DigitalInput digitalInputNegative3;
  DigitalInput digitalInputNegative4;
  DigitalInput digitalInputNegative5;
  DigitalInput digitalInputNegative6;
  DigitalInput digitalInputNegative7;
  DigitalInput digitalInputNegative8;

  DigitalInput digitalInputPositive1;
  DigitalInput digitalInputPositive2;
  DigitalInput digitalInputPositive3;
  DigitalInput digitalInputPositive4;
  DigitalInput digitalInputPositive5;
  DigitalInput digitalInputPositive6;
  DigitalInput digitalInputPositive7;
  DigitalInput digitalInputPositive8;

  Rgb rgb;

  SimpleOutput led;

  SimpleOutput digitalDirectOutput1;
  SimpleOutput digitalDirectOutput2;
  SimpleOutput digitalDirectOutput3;
  SimpleOutput digitalDirectOutput4;

  Generic_LM75 temperature;
};
