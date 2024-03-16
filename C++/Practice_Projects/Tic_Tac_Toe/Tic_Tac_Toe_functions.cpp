#include <iostream>
#include <string>
using namespace std;

void greet() {

    cout << "=====================\n";
    cout << "     Tic Tac Toe     \n";
    cout << "=====================\n\n";

    cout << "Welcome to a classic game of Tic Tac Toe!\n\n";
}

void print_borad(char board[3][3]) {

    cout << " -------------\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " | ";
            cout << board[i][j];
        }
        cout << " |\n";
        cout << " -------------\n";
    }
}

char choose_symbol(char* current_player_ptr, char* next_player_ptr) {

    string p1;

    while (true){

        cout << "\nPlease choose a sign(O / X): ";
        cin >> p1;

        if (p1 == "O" || p1 == "o") {
            *current_player_ptr = 'O';
            *next_player_ptr = 'X';
            cout << "Player-1 is 'O' and Player-2 is 'X'\n";
            return 'O';
        }
        else if (p1 == "X" || p1 == "x") {
            *current_player_ptr = 'X';
            *next_player_ptr = 'O';
            cout << "Player-1 is 'X' and Player-2 is 'O'\n";
            return 'X';
        }
        else {
            cout << "Invalid Input!Try again.\n";
        }
    }
}


int get_player_input(char board[3][3]) {

    int input = 0;

    while (true) {
        
        cout << "Enter the reference number of your choice: ";
        cin >> input;

        if (input >= 1 && input <= 9){
            
            if (input == 1 && board[0][0] != '1') cout << "Enter an empty reference!\n";
            else if (input == 2 && board[0][1] != '2') cout << "Enter an empty reference!\n";
            else if (input == 3 && board[0][2] != '3') cout << "Enter an empty reference!\n";
            else if (input == 4 && board[1][0] != '4') cout << "Enter an empty reference!\n";
            else if (input == 5 && board[1][1] != '5') cout << "Enter an empty reference!\n";
            else if (input == 6 && board[1][2] != '6') cout << "Enter an empty reference!\n";
            else if (input == 7 && board[2][0] != '7') cout << "Enter an empty reference!\n";
            else if (input == 8 && board[2][1] != '8') cout << "Enter an empty reference!\n";
            else if (input == 9 && board[2][2] != '9') cout << "Enter an empty reference!\n";
            else break;
        }
        else cout << "Invalid Input!Try again.\n";
    }
    return input;
}

void place_character_onboard(int input, int* input_count, char current_player, char board[3][3]) {

    if (input == 1) board[0][0] = current_player;
    else if (input == 2) board[0][1] = current_player;
    else if (input == 3) board[0][2] = current_player;
    else if (input == 4) board[1][0] = current_player;
    else if (input == 5) board[1][1] = current_player;
    else if (input == 6) board[1][2] = current_player;
    else if (input == 7) board[2][0] = current_player;
    else if (input == 8) board[2][1] = current_player;
    else if (input == 9) board[2][2] = current_player;
    *input_count += 1;
}

bool check_Horizontal(char board[3][3]) {

    if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) return true;
    
    if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) return true;

    if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) return true;

    return false;
}

bool check_Vertical(char board[3][3]) {

    if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) return true;
    
    if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) return true;

    if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) return true;

    return false;
}

bool check_diagonal(char board[3][3]) {

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;

    return false;
}

bool check_board(char board[3][3]) {

    if (check_Horizontal(board)) return true;
    
    if (check_Vertical(board)) return true;

    if (check_diagonal(board)) return true;

    return false;
}

void delay(int num){

    clock_t start = clock();
    while ( (clock() - start)/CLOCKS_PER_SEC <= num){
            //nothing
    }
}