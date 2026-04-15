#include "graphics.h"

// These are simplified wrappers for 7800 sprite/tile calls

void clearScreen() {
    // platform-specific clear
}

void drawPlayer(int x, int y) {
    // draw sprite 0
}

void drawBlock(int x, int y) {
    // draw sprite 1
}

void drawScore(int score) {
    // fake text via tiles or debug print
}

void drawText(int x, int y, char *text) {
    // render string using tile font
}
