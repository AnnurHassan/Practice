#include <iostream>
using namespace std;

// function Prototypes
void print_Question(int, string, string, string, string, string);
void checkAnswer1(int);
void checkAnswer2(int);
void checkAnswer3(int);
void checkAnswer4(int);
void Determine_House();

// Global variables
int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0;

int main() {

    // variables for storing user input
    int answer1;
    int answer2;
    int answer3;
    int answer4;

    cout << "The Sorting Hat Quiz!\n\n"; // title

    //First Question
    print_Question(1, "When I'm dead, I want people to remember me as: ", "The Good", "The Great", "The Wise", "The Bold");
    cout << "Your Answer: "; // user prompt
    cin >> answer1; // input 
    checkAnswer1(answer1); // checking the answer

    // Second Question
    print_Question(2, "Dawn or Dusk?", "Dawn", "Dusk", "", "");
    cout << "Your Answer: "; // user prompt
    cin >> answer2; //input
    checkAnswer2(answer2); // checking the answer

    print_Question(3, "Which kind of instrument most pleases your ear?", "The violin", "The trumpet", "The piano", "The drum"); // user prompt
    cout << "Your Answer: ";
    cin >> answer3; // input
    checkAnswer3(answer3); // checking the answer

    print_Question(4, "Which road tempts you most?", "The wide, sunny grassy lane", "The narrow, dark, lantern-lit alley", "The twisting, leaf-strewn path through woods", "The cobbled street lined (ancient buildings)");
    cout << "Your Answer: "; // user prompt
    cin >> answer4; // input
    checkAnswer4(answer4); // checking the answer

    // Determine the house for the user based on the answer to the questons
    Determine_House();

}

// printing the question in format
void print_Question(int num, string q, string op1, string op2, string op3, string op4) {

    int count = 1;
    cout << "Q" << num << ") " << q << "\n\n"; // printing the questions


    // printing the options depending on the arguments passed
    if (op1 != ""){
        cout << count << ") "<< op1 << "\n";
        count += 1;    
    }

    if (op2 != ""){
        cout << count << ") "<< op2 << "\n";
        count += 1;  
    }

    if (op3 != ""){
        cout << count << ") "<< op3 << "\n";
        count += 1;  
    }

    if (op4 != ""){
        cout << count << ") "<< op4 << "\n";
        count += 1;  
    }

    cout << "\n";
}

// check for question 1
void checkAnswer1(int ans){

    if (ans == 1) hufflepuff += 1;
    else if(ans == 2) slytherin += 1;
    else if (ans == 3) ravenclaw += 1;
    else if (ans == 4) gryffindor += 1;
    else cout << "Invalid Input\n";
}

// check for question 2
void checkAnswer2(int ans){

    if (ans == 1) gryffindor += 1, ravenclaw += 1;
    else if(ans == 2) slytherin += 1, hufflepuff += 1;
    else cout << "Invalid Input\n";
}

// check for question 3
void checkAnswer3(int ans){

    if(ans == 1) slytherin += 1;
    else if (ans == 2) hufflepuff += 1;
    else if (ans == 3) ravenclaw += 1;
    else if (ans == 4) gryffindor += 1;
    else cout << "Invalid Input\n";
}

// check for question 4
void checkAnswer4(int ans){

    if (ans == 1) hufflepuff += 1;
    else if(ans == 2) slytherin += 1;
    else if (ans == 3) gryffindor += 1;
    else if (ans == 4) ravenclaw += 1;
    else cout << "Invalid Input\n";
}

// fucntion for determining the house 
void Determine_House() {
    int max = 0;
    string house;
    
    // checking which house has the most number of points
    if (gryffindor > max) max = gryffindor, house = "Gryffindor";
    else if (hufflepuff > max) max = hufflepuff, house = "Hufflepuff";
    else if (ravenclaw > max) max = ravenclaw, house = "Ravenclaw";
    else if (slytherin > max) max = slytherin, house = "Slytherin";

    cout << house << "\n"; // displaying the house for the user
}

