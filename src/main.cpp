#include "Player.h"
#include "tictactoe.h"

#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    int mode{mode_choice()};

    if (mode == 1)
        tictactoe_2_players();
    else if (mode == 2)
        tictactoe_player_vs_random();

    cout << "JEU DU MORPION : FIN" << endl;

    return 0;
}