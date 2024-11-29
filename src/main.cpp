#include "Player.h"
#include "tictactoe.h"

using namespace std;

int main(){
    //Player p = create_player();
    //p.display();
    array<char, 9> board;
    initialize_board(board);
    draw_game_board(board);
    return 0;
}