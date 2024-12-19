#pragma once

#include "Agent.h"


struct IA_random : public Agent { // represente un joueur ordi qui joue de facon aleatoire
    void IA_random::play(std::array<int, 9> &board);
};