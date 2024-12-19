#pragma once

#include <array>
#include <vector>


void initialize_board(std::array<int, 9> &board);
void draw_game_board(const std::array<int, 9> &board, char symbol1, char symbol2);
void switch_values(std::array<int, 9> &board);
int winner(const std::array<int, 9> &board);
std::vector<int> free_indexes(const std::array<int, 9> &board);