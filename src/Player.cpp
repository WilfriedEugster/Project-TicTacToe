#include "Player.h"

#include <iostream>

using namespace std;


void Player::play(array<int, 9> &board){
    int choice{0};
    bool valid_choice{false};

    while (!valid_choice){
        cout << name << ", choisissez la case ou mettre un " << symbol << " :" << endl;
        cin >> choice;
        if (cin.fail()){
            cout << "L'entree doit etre un nombre entier !" << endl;
            std::cin.clear();
            std::cin.ignore(256,'\n');
        }
        else{
            if (1 <= choice && choice <= board.size()){
                if (board[choice - 1] == 0)
                    valid_choice = true;
                else
                    cout << "La case doit etre libre !" << endl;
            }
            else
                cout << "L'entier doit etre compris entre 1 et 9 !" << endl;
        }
    }

    place_symbol(board, choice - 1);
}

Player create_player_base(char symbol = 'X'){ // demande son nom au joueur et renvoie la structure Player associee
    string name{};

    cout << "Saisissez votre nom :" << endl;
    cin >> name;
    
    return {name, symbol};
}

Player create_player(){ // demande son nom et son symbole au joueur et renvoie la structure Player associee
    string symbol_input{};
    char symbol{};

    Player res = create_player_base();

    bool valid_symbol_input{false};

    cout << "Choisissez votre symbole (X ou O) :" << endl;
    cin >> symbol_input;
    if (symbol_input.size() == 1) 
        if (symbol_input[0] == 'X' || symbol_input[0] == 'O' || symbol_input[0] == 'x' || symbol_input[0] == 'o')
            valid_symbol_input = true;
    
    while (!valid_symbol_input) {
        cout << "Le symbole saisi est invalide." << endl;
        cout << "Choisissez votre symbole (X ou O) :" << endl;
        cin >> symbol_input;

        if (symbol_input.size() == 1) 
            if (symbol_input[0] == 'X' || symbol_input[0] == 'O' || symbol_input[0] == 'x' || symbol_input[0] == 'o')
                valid_symbol_input = true;
    }

    symbol = symbol_input[0];

    if (symbol == 'x')
        symbol = 'X';

    if (symbol == 'o')
        symbol = 'O';

    res.symbol = symbol;

    return res;
}
