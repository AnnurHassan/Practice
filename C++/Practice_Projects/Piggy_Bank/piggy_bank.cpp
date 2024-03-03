#include <iostream>

int main() {

    double pesos;
    double reais;
    double soles;
    double dollars;

    std::cout << "Enter number of Colombiam Pesos: "; // user promt
    std::cin >> pesos; // taking input

    std::cout << "Enter number of Brazillian Reais: "; // promt
    std::cin >> reais; //input

    std::cout << "Enter number of Peruvian Soles: "; // promt
    std::cin >> soles; // input

    dollars = (pesos * 0.00025 ) + (reais * 0.20) + (soles * 0.26); // calcutating dollars
 
    std::cout << "US Dollars = $" << dollars <<"\n"; //print the amount of dollars
}