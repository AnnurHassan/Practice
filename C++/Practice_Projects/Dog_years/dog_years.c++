#include <iostream>


int main() {

    int dog_age = 3; // initializing a the age variable
    int early_years;
    int later_years;
    int human_years;

    early_years = 21; // setting value of early_years to 21

    later_years = (dog_age - 2) * 4; // calculating later years

    human_years = early_years + later_years; // calculating human years

    std::cout << "My name is Alamgir! " << "Ruff ruff, I am " << human_years << "years old in human years.\n";

    

}
