#include "game.h"

void main() {
    initGame();

    while (1) {
        updateGame();
        drawGame();
    }
}
