#include <Buzzer.h>

void Buzzer::buzz(int seconds) {
  unsigned long start = millis();
  this->write(1);
  while (millis() < start + seconds) {
  }
  this->write(0);
}