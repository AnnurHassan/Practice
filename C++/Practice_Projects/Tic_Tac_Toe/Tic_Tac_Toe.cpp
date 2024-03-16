#include <iostream>
#include <vector>
#include <stdlib.h> 
#include "Tic_Tac_Toe_functions.hpp"
#include <time.h>
using namespace std;

char board[3][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}};

char current_player;
char* current_player_ptr = &current_player;
char next_player;
char* next_player_ptr = &next_player;
char previous_player;
int input_count = 0;
int* input_count_ptr = &input_count;
char starting_player;
string winner;

int main() {

    greet();

    starting_player = choose_symbol(current_player_ptr, next_player_ptr);

    cout << "\nLet the game begin!\n\n";
    print_borad(board);


    while (true) {
        
        int input;

        cout << "\nCurrent Player: " << current_player << "\n";
        cout << "\nNote: Please enter the number referencing to the location you want to place your symbol.\n      Please choose an empty one!\n\n";

        input = get_player_input(board); 

        place_character_onboard(input, input_count_ptr, current_player, board);
        print_borad(board);
        
         if (input >=5) {
            if (check_board(board)) {
                if (current_player == starting_player) winner = "Player 1";
                else winner = "Player 2";

                cout << "\n" << winner << " wins the game! Congratulation!\n";
                cout << "\n-------------GAME ENDED-------------\n";
                delay(2);
                exit(0);
            }
        }

        if (input_count < 9) {
            previous_player = current_player;
            current_player = next_player;
            next_player = previous_player;
        }
        else {
            cout << "\nOut of moves! Its a Draw............\n";
            cout << "\n-------------GAME ENDED-------------\n";
            delay(2);
            exit(0);
        }
    }
}