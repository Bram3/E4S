#include <Mux.h>

bool *Mux::readInputs()
{
    static bool MXi[16];

    int muxChannels[16][4] = {{0, 0, 0, 0},
                              {1, 0, 0, 0},
                              {0, 1, 0, 0},
                              {1, 1, 0, 0},
                              {0, 0, 1, 0},
                              {1, 0, 1, 0},
                              {0, 1, 1, 0},
                              {1, 1, 1, 0},
                              {0, 0, 0, 1},
                              {1, 0, 0, 1},
                              {0, 1, 0, 1},
                              {1, 1, 0, 1},
                              {0, 0, 1, 1},
                              {1, 0, 1, 1},
                              {0, 1, 1, 1},
                              {1, 1, 1, 1}};
    for (int i = 0; i < 16; i++)
    {
        digitalWrite(MuxA0Pin, muxChannels[i][0]);
        digitalWrite(MuxA1Pin, muxChannels[i][1]);
        digitalWrite(MuxA2Pin, muxChannels[i][2]);
        digitalWrite(MuxA3Pin, muxChannels[i][3]);
        delayMicroseconds(10);
        MXi[i] = digitalRead(MuxDinPin);
    }
    return MXi;
}