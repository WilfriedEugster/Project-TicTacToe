#include "Player.h"
#include "tictactoe.h"

using namespace std;

int main(){
    Agent p = create_player();
    //Agent p {Player{"player", 'X'}};
    Agent ordi{"ordi", 'O'};
    p.display();
    ordi.display();

    array<int, 9> board{
        -1, 0, 0,
        0, 1, 0,
        0, 1, 0
    };
    //initialize_board(board);

    draw_game_board(board, p.symbol, ordi.symbol);

    return 0;
}