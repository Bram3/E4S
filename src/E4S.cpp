#include <E4S.h>
#include <Relay.h>
#include <ShiftRegister.h>

E4S::E4S()
    : mShiftRegister(ShiftRegister()), relay1(Relay(mShiftRegister, 23)),
      relay2(Relay(mShiftRegister, 22)), relay3(Relay(mShiftRegister, 21)),
      relay4(Relay(mShiftRegister, 20)), relay5(Relay(mShiftRegister, 19)),
      relay6(Relay(mShiftRegister, 18)), relay7(Relay(mShiftRegister, 17)),
      relay8(Relay(mShiftRegister, 16)) {}