#include "IA_random.h"

#include <cstdlib>

using namespace std;


vector<int> free_indexes(const array<int, 9> &board){
    vector<int> res{};
    
    for(int i{0}; i < board.size(); i++)
        if (board[i] == 0)
            res.push_back(i);
    
    return res;
}

void IA_random::play(array<int, 9> &board){ // joue sur une case libre aleatoire
    vector<int> v{free_indexes(board)};
    place_symbol(board, v[rand()%v.size()]);
}