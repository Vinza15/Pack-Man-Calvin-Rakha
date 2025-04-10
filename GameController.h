#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "Pacman.h"
#include "Ghost.h"
#include "GhostFactory.h"
#include "GhostDecorator.h"
#include <vector>
#include <memory>

class GameController {
    private:
        Pacman pac;
        static std::vector<std::shared_ptr<Ghost>> ghosts; // Static declaration
    public:
        GameController();
        void run();
        static void triggerFrightenedState(); // Static function
};

#endif