#ifndef MAP_H
#define MAP_H

class Map {
public:
    static const int WIDTH = 12;
    static const int HEIGHT = 12;
    char map[HEIGHT][WIDTH];

    Map();  
    void render();
};

#endif
