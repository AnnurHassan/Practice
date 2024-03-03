#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    srand(time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;

    cout << "====================\n";
    cout << "rock paper scissors!\n";
    cout << "====================\n";

    cout << "1) Rock\n";
    cout << "2) Paper\n";
    cout << "3) Scissors\n";

    cout << "shoot! "; 
    cin >> user;
}