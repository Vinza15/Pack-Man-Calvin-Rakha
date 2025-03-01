#include <iostream>
#include "Map.h"
#include "PacMan.h"
#include "Ghost.h"

using namespace std;

int main() {
    Map gameMap;
    PacMan pacman(5, 5);
    Ghost ghost(10, 10);

    gameMap.render();
    
    pacman.move();
    ghost.move();

    return 0;
}
