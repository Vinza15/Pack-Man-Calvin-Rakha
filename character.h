#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
protected:
    int x, y;
public:
    Character(int startX, int startY);
    virtual void move() = 0; // Pure virtual function
    int getX() const;
    int getY() const;
};

#endif
