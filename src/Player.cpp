#include "Player.h"

#include <iostream>

using namespace std;


Player create_player() {
    string name{}, symbol_input{};
    char symbol{};

    cout << "Saisissez votre nom :" << endl;
    cin >> name;

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

    return {name, symbol};
}

void Player::display(){
    cout << "(" << name << ", " << symbol << ")" << endl;
}