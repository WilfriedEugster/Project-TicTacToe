#include "tictactoe.h"

#include "Player.h"
#include "IA_random.h"

#include <iostream>
#include <cstdlib>

using namespace std;


void end_message(int w, const Agent &p1, const Agent &p2){
    if (w == 0)
        cout << "Match nul..." << endl;

    if (w == 1)
        cout << "Victoire de " << p1.name << endl;

    if (w == -1)
        cout << "Victoire de " << p2.name << endl;
}

int tictactoe_2_players(){
    // plateau
    array<int, 9> board{};
    initialize_board(board);

    // joueurs
    cout << "JOUEUR 1" << endl;
    Player p1{create_player()};
    cout << "JOUEUR 2" << endl;
    Player p2{create_player_base('X')};
    if (p1.symbol == 'X')
        p2.symbol = 'O';

    cout << "Chaque case est associee a un numero :" << endl;
    cout << "| 1 | 2 | 3 |" << endl << "| 4 | 5 | 6 |" << endl << "| 7 | 8 | 9 |" << endl;

    // le joueur 1 est associe au nombre 1
    // le joueur 2 est associe au nombre -1
    int w{0}; // nombre du joueur gagnant (0 si match nul ou partie non terminee)
    int tour{rand()%2 * 2 - 1}; // nombre du joueur dont c'est le tour

    // partie
    for(int i{0}; i < 9; i++){
        if (tour == 1){
            p1.play(board);
        }
        else{
            switch_values(board);
            p2.play(board);
            switch_values(board);
        }
        draw_game_board(board, p1.symbol, p2.symbol);

        w = winner(board);
        if (w != 0)
            break;
        tour *= -1;
    }

    end_message(w, p1, p2);

    return w;
}

int tictactoe_player_vs_random(){
    // plateau
    array<int, 9> board{};
    initialize_board(board);

    // agents
    cout << "JOUEUR VS RANDOM" << endl;
    Player p{create_player()};
    IA_random ia{"RANDOM", 'X'};
    if (p.symbol == 'X')
        ia.symbol = 'O';

    cout << "Chaque case est associee a un numero :" << endl;
    cout << "| 1 | 2 | 3 |" << endl << "| 4 | 5 | 6 |" << endl << "| 7 | 8 | 9 |" << endl;

    // le joueur 1 est associe au nombre 1
    // l'ia est associee au nombre -1
    int w{0}; // nombre du joueur gagnant (0 si match nul ou partie non terminee)
    int tour{rand()%2 * 2 - 1}; // nombre du joueur dont c'est le tour

    // partie
    for(int i{0}; i < 9; i++){
        if (tour == 1){
            p.play(board);
        }
        else{
            cout << ia.name << " joue :" << endl;
            switch_values(board);
            ia.play(board);
            switch_values(board);
        }
        draw_game_board(board, p.symbol, ia.symbol);

        w = winner(board);
        if (w != 0)
            break;
        tour *= -1;
    }

    end_message(w, p, ia);

    return w;
}