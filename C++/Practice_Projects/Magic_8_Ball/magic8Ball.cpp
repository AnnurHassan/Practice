#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    cout << "Magic 8-Ball: \n"; //title

    srand(time(NULL)); 

    int answer = std::rand() % 10; // generating a random interger between 0 to 9

    // printing message according to the random number generated
    if (answer == 0) {
        cout << "It is certain.\n";
    }
    else if (answer == 1) {
        cout << "It is decidedly so.\n";
    }
    else if (answer == 2) {
        cout << "Without a doubt.\n";
    }
    else if (answer == 3) {
        cout << "Yes - definitely.\n";
    }
    else if (answer == 4) {
        cout << "You may rely on it.\n";
    }
    else if (answer == 5) {
        cout << "As I see it, yes.\n";
    }
    else if (answer == 6) {
        cout << "Most likely.\n";
    }
    else if (answer == 7) {
        cout << "Outlook good.\n";
    }
    else if (answer == 8) {
        cout << "Ask again later.\n";
    }
    else if (answer == 9) {
        cout << "Cannot predict now.\n";
    }
    else {
        cout << "Very doubtful.";
    }

}