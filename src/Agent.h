#pragma once

#include "board.h"

#include <string>


struct Agent { // la structure Agent peut etre un joueur (Player) ou une IA
    std::string name{"agent1"};
    char symbol{'X'}; // 'X' ou 'O'

    void display();
    void play(std::array<int, 9> &board);
};