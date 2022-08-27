#include <Button.h>
#include <DigitalInput.h>
#include <E4S.h>
#include <Relay.h>
#include <Rgb.h>
#include <ShiftRegister.h>

E4S::E4S()
    : mShiftRegister(ShiftRegister()), mMux(Mux()),
      relay1(Relay(mShiftRegister, 23)), relay2(Relay(mShiftRegister, 22)),
      relay3(Relay(mShiftRegister, 21)), relay4(Relay(mShiftRegister, 20)),
      relay5(Relay(mShiftRegister, 19)), relay6(Relay(mShiftRegister, 18)),
      relay7(Relay(mShiftRegister, 17)), relay8(Relay(mShiftRegister, 16)),
      segment7(Segment7(mShiftRegister)), button1(Button(32)),
      button2(Button(33)), button3(Button(25)), button4(Button(27)),
      digitalInputNegative1(DigitalInput(mMux, 0)),
      digitalInputNegative2(DigitalInput(mMux, 1)),
      digitalInputNegative3(DigitalInput(mMux, 2)),
      digitalInputNegative4(DigitalInput(mMux, 3)),
      digitalInputNegative5(DigitalInput(mMux, 4)),
      digitalInputNegative6(DigitalInput(mMux, 5)),
      digitalInputNegative7(DigitalInput(mMux, 6)),
      digitalInputNegative8(DigitalInput(mMux, 7)),
      digitalInputPositive1(DigitalInput(mMux, 8)),
      digitalInputPositive2(DigitalInput(mMux, 9)),
      digitalInputPositive3(DigitalInput(mMux, 10)),
      digitalInputPositive4(DigitalInput(mMux, 11)),
      digitalInputPositive5(DigitalInput(mMux, 12)),
      digitalInputPositive6(DigitalInput(mMux, 13)),
      digitalInputPositive7(DigitalInput(mMux, 14)),
      digitalInputPositive8(DigitalInput(mMux, 15)), rgb(Rgb(mShiftRegister)),
      led(SimpleOutput(2)), digitalDirectOutput1(SimpleOutput(16)),
      digitalDirectOutput2(SimpleOutput(17)),
      digitalDirectOutput3(SimpleOutput(18)),
      digitalDirectOutput4(SimpleOutput(19)), temperature(Generic_LM75(0x48)) {}