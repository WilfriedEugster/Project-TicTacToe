#include "Agent.h"

#include <iostream>

using namespace std;


void Agent::display(){ // affiche un Agent
    cout << "(" << name << ", " << symbol << ")" << endl;
}

void Agent::place_symbol(std::array<int, 9> &board, int n){
    if (!(0 <= n && n < board.size())){
        cout << n << "n'est pas compris entre 0 et " << board.size() - 1 << "." << endl;
        return;
    }
    if (board[n] != 0){
        cout << "board[" << n << "] est deja occupee." << endl;
        return;
    }
    board[n] = 1;
}

