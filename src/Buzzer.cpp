#include <Buzzer.h>

void Buzzer::buzz(int seconds) {
  unsigned long start = millis();
  this->writeDigital(1);
  while (millis() < start + seconds) {
  }
  this->writeDigital(0);
}