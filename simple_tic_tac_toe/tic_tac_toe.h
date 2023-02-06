#include <iostream>
#include <stdio.h>
#include <string>

class tic_tac_toe{
    // array for the board 
    char ttt[3][3] = {{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'}};
    
    int row, column;
    int player_choice;
    char current_turn = 'X'; // first turn is always X
    bool draw = false;

    public:
        void display_board(){
        // display the tic tac toe board 

        std::cout << "\n\n\tPLAYER 1 [X] \t\t PLAYER 2 [0]\n\n";
    
        std::cout << "\t\t     |     |     \n";
        std::cout << "\t\t  " <<ttt[0][0] << "  |  " << ttt[0][1] << "  |  " << ttt[0][2] << std::endl;
        std::cout << "\t\t_____|_____|_____\n";
        std::cout << "\t\t     |     |     \n";
        std::cout << "\t\t  " <<ttt[1][0] << "  |  " << ttt[1][1] << "  |  " << ttt[1][2] << std::endl;
        std::cout << "\t\t_____|_____|_____\n";
        std::cout << "\t\t     |     |     \n";
        std::cout << "\t\t  " <<ttt[2][0] << "  |  " << ttt[2][1] << "  |   " << ttt[2][2] << std::endl;
        std::cout << "\t\t     |     |     \n\n";
    
        } 

        void play_game(){
        // function that takes player input and 
        
            if (current_turn == 'X'){
                std::cout << "Player 1's turn [X], enter location: ";
                std::cin >> player_choice;
            }
            else if (current_turn == 'O'){
                std::cout << "Player 2's turn [O], enter location: ";
                std::cin >> player_choice;
            }
            
            // switch case for which position will be updated on the board 
            switch(player_choice){
                   case 1:
                        row = 0;
                        column = 0;
                        break;
                    case 2:
                        row = 0;
                        column = 1;
                        break;
                    case 3:
                        row = 0;
                        column = 2;
                        break;
                    case 4:
                        row = 1;
                        column = 0;
                        break;
                    case 5:
                        row = 1;
                        column = 1;
                        break;
                    case 6:
                        row = 1;
                        column = 2;
                        break;
                    case 7:
                        row = 2;
                        column = 0;
                        break;
                    case 8:
                        row = 2;
                        column = 1;
                        break;
                    case 9:
                        row = 2;
                        column = 2;
                        break;
                    default:
                        std::cout << "Invalid Move\n";

            }
            
            // now we update position if the position is empty
            if (current_turn == 'X' && ttt[row][column] != 'X' && ttt[row][column] != 'O'){
                ttt[row][column] = 'X';
                current_turn = 'O'; // update the turn for player 2
            }
            else if (current_turn == 'O' && ttt[row][column] != 'X' && ttt[row][column] != 'O'){
                ttt[row][column] = 'O';
                current_turn = 'X'; // update the turn for player 1
            }
            else{
                std::cout << " That position was already chosen.\n Please choose another location.\n";
                play_game();
            }
            

        }
        
        bool game_over(){
            // check rows 
            for (int i = 0; i < 3; i++){
                if (ttt[i][0] == ttt[i][1] && ttt[i][0] == ttt[i][2]){
                    if (current_turn == 'O'){
                        std::cout << "Player 1 Won!\n";
                        return false;
                    }
                    else{
                        std::cout << "Player 2 Won!\n"; 
                        return false;                   
                    }
                }
            }
            // check columns
            for (int i = 0; i < 3; i++){
                if (ttt[0][i] == ttt[1][i] && ttt[0][i] == ttt[2][i]){
                    if (current_turn == 'O'){
                        std::cout << "Player 1 Won!\n";
                        return false;
                    }
                    else{
                        std::cout << "Player 2 Won!\n"; 
                        return false;                   
                    }
                }
            }
            // check down-left diagonal 
            for (int i = 0; i < 3; i++){
                if (ttt[0][0] == ttt[1][1] && ttt[0][0] == ttt[2][2]){
                    if (current_turn == 'O'){
                        std::cout << "Player 1 Won!\n";
                        return false;
                    }
                    else{
                        std::cout << "Player 2 Won!\n"; 
                        return false;                   
                    }
                }
            }

            // check down-right diagonal 
            for (int i = 0; i < 3; i++){
                if (ttt[0][2] == ttt[1][1] && ttt[2][0] == ttt[1][1]){
                    if (current_turn == 'O'){
                        std::cout << "Player 1 Won!\n";
                        return false;
                    }
                    else{
                        std::cout << "Player 2 Won!\n"; 
                        return false;                   
                    }
                }
            }

            for (int i = 0; i < 3; i++){
                for (int j= 0; j < 3; j++){
                    if (ttt[i][j] != 'X' && ttt[i][j] != 'O'){
                        return true;
                    }
                }
            }
            
            // if none of these happen, then it is a draw and the game is over
            draw = true;
            return false;
        }

};

