#pragma once

class Output {
public:
  virtual void write(int state);
  virtual bool read();
};