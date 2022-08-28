#include <Rgb.h>

void Rgb::write(int red, int green, int blue) {
  this->mShiftRegister.write(2, red);
  this->mShiftRegister.write(0, blue);
  this->mShiftRegister.write(1, green);
}

Rgb::Rgb(ShiftRegister &shiftRegister) : mShiftRegister(shiftRegister) {}