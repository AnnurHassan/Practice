#include <vector>
#include <string>
using namespace std;

class Profile{

    private:
        int age;
        string name;
        string city;
        string country;
        string gender;
        vector<string> hobbies;

    public:
        Profile(string new_name, int new_age, string new_city, string new_country, string new_gender = "Male");

        string view_profile();

        void add_hobby(string new_hobby);

};