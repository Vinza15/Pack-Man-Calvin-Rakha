#ifndef GHOST_H
#define GHOST_H

#include "Character.h"

class Ghost : public Character {
public:
    Ghost(int startX, int startY);
    void move() override;
};

#endif
