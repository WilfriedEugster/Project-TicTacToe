#include "board.h"

#include <iostream>

using namespace std;


void initialize_board(array<int, 9> &board){ // met toutes les cases du plateau a 0
    for (int i{0}; i < board.size(); i++)
        board[i] = 0;
}

void draw_game_board(const array<int, 9> &board, char symbol1, char symbol2){ // affiche le plateau
    for (int i{0}; i < 3; i++){
        cout << "| ";
        for (int j{0}; j < 3; j++){
            int n{board[i * 3 + j]};
            char c{' '};
            if (n == 1) 
                c = symbol1;
            else if (n == -1) 
                c = symbol2;
            cout << c << " | ";
        }
        cout << endl;
    }
}