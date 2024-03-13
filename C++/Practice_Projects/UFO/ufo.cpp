#include <iostream>
#include <string>
#include <vector>
#include "ufo_functions.hpp"
using namespace std;


int main() {

    greet();

    string codeword = "codecademy";
    string answer = "__________";

    int misses = 0;

    vector<char> incorrect;
    bool guess = false;

    char letter;

    while (answer != codeword && misses < 7) {

        display_misses(misses);
        display_status(answer, incorrect);

        cout << "Please enter your guess: ";
        cin >> letter;

        for (int i = 0; i < codeword.length(); i++) {
            if (codeword[i] == letter) {
                answer[i] = letter;
                guess = true;
            }
        }

        if (guess){
            cout << "\nCorrect! You're closer to cracking the codeword.\n";
        }
        else {
            std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }

    end_game(answer, codeword);

}