#pragma once

#include <Relay.h>
#include <ShiftRegister.h>

class E4S {
  ShiftRegister mShiftRegister;

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
};