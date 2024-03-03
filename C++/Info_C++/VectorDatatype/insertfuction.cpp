#include <iostream>
#include <vector>

int main() {
    // Initializes an array of size 3
    std::vector<int> grades(3);

    // Assign the values to the vector elements
    grades[0] = 20;
    grades[1] = 30;
    grades[2] = 40;

    // Display all 3 vector elements
    std::cout << grades[0] << ", ";
    std::cout << grades[1] << ", ";
    std::cout << grades[2] << "\n";

    // Adding Elements using .push_back()  
    grades.push_back(50);

    // Display all 4 vector elements
    std::cout << grades[0] << ", ";
    std::cout << grades[1] << ", ";
    std::cout << grades[2] << ", ";
    std::cout << grades[3] << "\n";


    //Using .insert() to insert 60
    //.begin() inserts in at the begining
    //.end() inserts in the end
    grades.insert(grades.begin(),60);
    std::cout << grades[4] << "\n";

    grades.insert(grades.end(), 70);
    std::cout << grades[5] << "\n";

}