#pragma once

#include <array>


void initialize_board(std::array<int, 9> &board);
void draw_game_board(const std::array<int, 9> &board, char symbol1, char symbol2);