#include "PacMan.h"
#include <iostream>

using namespace std;

PacMan::PacMan(int startX, int startY) : Character(startX, startY) {}

void PacMan::move() {
    cout << "Pac-Man is moving!" << endl;
}
