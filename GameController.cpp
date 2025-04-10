
#include "GameController.h"
#include "Map.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

// Inisialisasi vektor Ghost statik
std::vector<std::shared_ptr<Ghost>> GameController::ghosts;

GameController::GameController() : pac(10, 1) {
    srand(time(0));
    ghosts.push_back(GhostFactory::createGhost("Blinky", 5, 5));
}

// Fungsi untuk merender peta, Pacman, dan Ghost
void render(const Pacman& pacman, const std::vector<std::shared_ptr<Ghost>>& ghosts) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            bool printed = false;
            if (i == pacman.getX() && j == pacman.getY()) {
                cout << pacman.getSymbol() << " ";
                printed = true;
            } else {
                for (const auto& g : ghosts) {
                    if (g->getX() == i && g->getY() == j) {
                        cout << g->getSymbol() << " ";
                        printed = true;
                        break;
                    }
                }
            }
            if (!printed) cout << Map::map[i][j] << " ";
        }
        cout << endl;
    }

    for (const auto& g : ghosts) {
        cout << "Ghost at (" << g->getX() << ", " << g->getY() << ") is in state: " << g->getStateName() << endl;
    }
}

// Loop utama permainan
void GameController::run() {
    char input;
    while (true) {
        system("cls");
        render(pac, ghosts);

        if (_kbhit()) {
            input = _getch();
            if (input == 'q') break;
            pac.setDirection(input);
        }

        pac.move(*this);
        for (auto& ghost : ghosts) {
            ghost->move(pac.getX(), pac.getY());
        }

        Sleep(400);
    }
}

// Trigger state frightened untuk semua ghost
void GameController::triggerFrightenedState() {
    for (auto& ghost : ghosts) {
        ghost->changeState(std::make_shared<FrightenedState>());
    }
}
