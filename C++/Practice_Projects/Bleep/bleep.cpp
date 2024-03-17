#include <iostream>
#include <string>
using namespace std;


void replace(int &i, int size, string &text) {
    
    for (int x = 0; x < size; x++) {
        text[i] = '*';
        i++;
    }
}


void bleep(string word, string &text) {


    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'b') {

            string rem = "";
            for (int j = 0; j < word.length(); j++) {
                rem += text[j+i];
            }

            if (word == rem) {
                replace(i, word.length(), text);
            }
        }
    }
}


int main() {

    string word = "broccoli";

    string text = "I sometimes eat broccoli. The interesting thing about broccoli is that there are four interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";

    bleep(word, text);

    cout << text;
}