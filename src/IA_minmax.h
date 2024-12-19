#pragma once

#include "Agent.h"


struct IA_minmax : public Agent { // represente un joueur ordi qui joue de facon optimale
    void IA_minmax::play(std::array<int, 9> &board);
};

int best_score(std::array<int, 9> board, int* best_move);