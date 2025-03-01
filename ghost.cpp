#include "Ghost.h"
#include <iostream>

using namespace std;

Ghost::Ghost(int startX, int startY) : Character(startX, startY) {}

void Ghost::move() {
    cout << "Ghost is moving!" << endl;
}
