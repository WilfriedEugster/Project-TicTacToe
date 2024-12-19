#include "IA_random.h"
#include "board.h"

#include <cstdlib>

using namespace std;


void IA_random::play(array<int, 9> &board){ // joue sur une case libre aleatoire
    vector<int> v{free_indexes(board)};
    place_symbol(board, v[rand()%v.size()]);
}