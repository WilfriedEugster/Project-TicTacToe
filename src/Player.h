#pragma once

#include "Agent.h"

#include <string>
#include <array>


struct Player : public Agent { // represente un joueur
    void Player::play(std::array<int, 9> &board);
};

Player create_player_base(char symbol);
Player create_player();

void draw_game_board(const std::array<int, 9> &board, char symbol1, char symbol2);