#include<iostream>
#include "grid.h"
#include "game.h"
#include "player.h"

using namespace std;

void Game::begin()
{
    grid = new Grid;  
	grid->initialise_grid();

}

