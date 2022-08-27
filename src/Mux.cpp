#include <Arduino.h>
#include <Mux.h>
#include <Pins.h>

Mux::Mux() {
  pinMode(MuxA0Pin, OUTPUT);
  pinMode(MuxA1Pin, OUTPUT);
  pinMode(MuxA2Pin, OUTPUT);
  pinMode(MuxA3Pin, OUTPUT);
  pinMode(MuxDinPin, INPUT);
}

bool *Mux::read() {

  bool muxInputs[16];

  for (int i = 0; i < 16; i++) {
    digitalWrite(MuxA0Pin, this->mMuxChannels[i][0]);
    digitalWrite(MuxA1Pin, this->mMuxChannels[i][1]);
    digitalWrite(MuxA2Pin, this->mMuxChannels[i][2]);
    digitalWrite(MuxA3Pin, this->mMuxChannels[i][3]);
    delayMicroseconds(10);
    muxInputs[i] = digitalRead(MuxDinPin);
  }
  return muxInputs;
}
