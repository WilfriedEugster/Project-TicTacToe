#pragma once

#include <string>


struct Player {
    std::string name{"player1"};
    char symbol{'X'}; // 'X' ou 'O'

    void display();
};

Player create_player();