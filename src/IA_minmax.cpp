#include "IA_minmax.h"
#include "board.h"

using namespace std;

void IA_minmax::play(std::array<int, 9> &board){
    int move = -1;
    best_score(board, &move);
    place_symbol(board, move);
}

int best_score(std::array<int, 9> board, int* best_move){
    vector<int> v{free_indexes(board)}; // cases libres

    int w{winner(board)}; // gagnant
    if (w != 0)
        return w;
    if (v.size() == 0)
        return w;
    
    switch_values(board);
    int best_i{-1}; // meilleur coup
    int best_s{-1}; // meilleur resultat
    for (int i : v){
        board[i] = -1;
        int move{0}; // juste pour l'argument
        int score{-1 * best_score(board, &move)};
        board[i] = 0;
        if (score > best_s){
            best_s = score;
            best_i = i;
        }
        if (score == 1){
            break;
        }
    }

    *best_move = best_i;
    return best_s;
}