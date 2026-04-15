#include "input.h"

// 8bitworkshop maps these internally depending on platform
extern int joypad_state;

int getInputLeft() {
    return joypad_state & 0x01;
}

int getInputRight() {
    return joypad_state & 0x02;
}
