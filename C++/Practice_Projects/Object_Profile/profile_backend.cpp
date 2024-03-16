#include "profile_backend.hpp"

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_gender) {

    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    gender = new_gender;
}

string Profile::view_profile() {

    string bio = "Name: " + name;
    bio += "\nAge: " + to_string(age);
    bio += "\nGender: " + gender;
    bio += "\nHobbies: ";
    for (int i = 0; i < hobbies.size(); i++) {
        bio += hobbies[i];
        if (i == (hobbies.size() - 1)) bio += ".\n";
        else bio += ", ";
    }

    return bio;
}

void Profile::add_hobby(string new_hobby) {

    hobbies.push_back(new_hobby);
}