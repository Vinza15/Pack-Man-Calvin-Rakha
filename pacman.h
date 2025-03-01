#ifndef PACMAN_H
#define PACMAN_H

#include "Character.h"

class PacMan : public Character {
public:
    PacMan(int startX, int startY);
    void move() override;
};

#endif
