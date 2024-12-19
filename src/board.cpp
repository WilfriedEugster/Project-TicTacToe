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

void switch_values(array<int, 9> &board){
    for(int i{0}; i<board.size(); i++)
        board[i] *= -1;
}

int winner(const array<int, 9> &board){
    int res{0};

    // verification des lignes
    for (int j{0}; j < 3; j++){
        res = board[j * 3]; // debut de la ligne
        if (res == 0)
            continue;

        for (int i{1}; i < 3; i++){
            if (board[j * 3 + i] != res){
                res = 0;
                break;
            }
        }

        if (res!=0)
            return res;
    }

    // verification des colonnes
    for (int i{0}; i < 3; i++){
        res = board[i]; // debut de la colonne
        if (res == 0)
            continue;

        for (int j{1}; j < 3; j++){
            if (board[j * 3 + i] != res){
                res = 0;
                break;
            }
        }

        if (res!=0)
            return res;
    }

    //verification des diagonales

    res = board[0]; // debut de la diagonale 1
    if (res != 0){
        for (int i{1}; i < 3; i++){
            if (board[i * 3 + i] != res){
                res = 0;
                break;
            }
        }

        if (res!=0)
            return res;
    }

    res = board[2]; // debut de la diagonale 2
    if (res != 0){
        for (int i{1}; i < 3; i++){
            if (board[i * 3 + (2 - i)] != res){
                res = 0;
                break;
            }
        }

        if (res!=0)
            return res;
    }

    return res;
}

