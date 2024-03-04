#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string input = "Hi, human!";

    vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    vector<char> result;

    for (int i = 0; i < input.size(); i++) {

        for (int j = 0; j < vowels.size(); j++) {
            
            if (input[i] == vowels[j]) {
                result.push_back(input[i]);
                break;
            }
        }
        if (input[i] == 'e') result.push_back(input[i]);
        else if (input[i] == 'u') result.push_back(input[i]);
        else if (input[i] == 'E') result.push_back(input[i]);
        else if (input[i] == 'U') result.push_back(input[i]);
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
    }
    cout << "\n";

}