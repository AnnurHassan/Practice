#include <iostream>
#include "profile_backend.hpp"

int main() {

    Profile sam("Annur Hassan", 22, "Dhaka", "Bangladesh");

    sam.add_hobby("Sim Racing");
    sam.add_hobby("Programming");
    sam.add_hobby("Robotics");

    cout << "------------\n";
    cout << sam.view_profile();
    cout << "------------\n";
}