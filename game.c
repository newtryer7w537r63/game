#include "game.h"
#include "input.h"
#include "graphics.h"

int playerX = 10;
int blockY = 0;
int blockX = 15;
int score = 0;
int gameOver = 0;

void initGame() {
    playerX = 10;
    blockY = 0;
    score = 0;
    gameOver = 0;
}

void updateGame() {
    if (gameOver) {
        if (getInputLeft() || getInputRight()) {
            initGame();
        }
        return;
    }

    if (getInputLeft()) playerX--;
    if (getInputRight()) playerX++;

    blockY++;

    if (blockY > 20) {
        blockY = 0;
        blockX = (blockX * 3 + 7) % 20;
        score++;
    }

    if (blockY == 18 && blockX == playerX) {
        gameOver = 1;
    }
}

void drawGame() {
    clearScreen();

    drawPlayer(playerX, 20);
    drawBlock(blockX, blockY);
    drawScore(score);

    if (gameOver) {
        drawText(5, 10, "GAME OVER");
    }
}
