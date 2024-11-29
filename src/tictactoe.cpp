#include "tictactoe.h"

#include "Player.h"

#include <iostream>

using namespace std;

void initialize_board(array<char, 9> &board) {
    for (int i{0}; i < 9; i++)
        board[i] = ' ';
}

void draw_game_board(const array<char, 9> &board) {
    for (int i{0}; i < 3; i++) {
        cout << "| ";
        for (int j{0}; j < 3; j++) {
            cout << board[i * 3 + j] << " | ";
        }
        cout << endl;
    }
}