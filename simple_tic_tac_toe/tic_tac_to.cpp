#include <iostream>
#include <stdio.h>
#include <string>
#include "tic_tac_toe.h"
using namespace std;

// simple tic tac toe beginner exercise

int main(){

    tic_tac_toe game;
    
    while(game.game_over()){
        game.display_board();
        game.play_game();  
    }
    return 0;

}
