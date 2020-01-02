#ifndef GAME_H
#define GAME_H
#include<iostream>
#include "grid.h"
using namespace std;

class Grid;

class Game{
    private:
        Grid* grid; //If you do without the pointer, then only 1 is returned. CHECK
        Player* player;
    public:
        Game();
        ~Game();
        void begin();
};
#endif