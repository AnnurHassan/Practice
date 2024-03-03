#include <iostream>

int main() {
  
    int year;
    bool flag;

    std::cout << "Enter a year: "; // Prompting the user
    std::cin >> year; // taking input from user

    // checking if Leap year or not
    if (year % 4 == 0) {

        flag = true;

        if ((year % 100 == 0) && !(year % 400 == 0)) {
            flag = false;
        }

        else if (year % 400 == 0) {
            flag = true;
        }
    }  

    else {
        flag = false;
    }
    
    // Printing statment to user
    if (flag) {
        std::cout << "Leap year\n";
    }

    else {
        std::cout << "Not Leap year\n";
    }
  
}