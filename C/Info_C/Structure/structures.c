#include <stdio.h>
#include <string.h>

// Initailizing Structure
struct StructureName {
    //Body
};

//Creating a Structure
// All type of data types can be used to make variables inside a structre
struct Member {
    char name[20];
    int age;
    int weight;
    
};

int main() {

    //Creating a structureVariale 
    struct Member memberNo_1 = {"Annur Hassan", 21, 65};

    //Accessing the variables
    printf("Name: %s\nAge: %d\nWeight: %d KG", memberNo_1.name, memberNo_1.age, memberNo_1.weight);

}