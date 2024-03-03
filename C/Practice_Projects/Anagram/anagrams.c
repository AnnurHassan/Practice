#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    int counter1[] = {0, 0, 0, 0};
    int counter2[] = {0, 0, 0, 0};

    char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

    //Counting Characters in S1
    for (int i = 0; i < strlen(s1); i++) {
        
        if (s1[i] == 'a') {
            counter1[0] += 1;
        }
        else if (s1[i] == 'b') {
            counter1[1] += 1;
        }
        else if (s1[i] == 'c') {
            counter1[2] += 1;
        }
        else if (s1[1] == 'd') {
            counter1[3] += 1;
        }
    } 

    //Counting Characters in S2
    for (int i = 0; i < strlen(s2); i++) {
        
        if (s2[i] == 'a') {
            counter2[0] += 1;
        }
        else if (s2[i] == 'b') {
            counter2[1] += 1;
        }
        else if (s2[i] == 'c') {
            counter2[2] += 1;
        }
        else if (s2[1] == 'd') {
            counter2[3] += 1;
        }
    }

    bool flag = false;

    //Looping through both counters and comparing them
    for (int i = 0; i < 4; i++) {

        if (counter1[i] != counter2[i]) {
            flag = true;
        }
    }

    //Checking Flag and printing results
    if (flag) {
        printf("Not Anagram!\n");
    }
    else {
        printf("Anagram!\n");
    }

}