#include "Player.h"
#include "tictactoe.h"

#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    tictactoe_player_vs_random();

    //draw_game_board(board, p.symbol, ordi.symbol);
    //p.play(board);
    //draw_game_board(board, p.symbol, ordi.symbol);

    return 0;
}