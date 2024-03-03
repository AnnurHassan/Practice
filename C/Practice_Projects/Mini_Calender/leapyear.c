#include <stdio.h>
#include <stdbool.h>

int main() {   
    
    int year;
    bool flag;

    printf("Please enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        flag = true;

        if ((year % 100 == 0) && (year % 400 != 0)) {
            flag = false;
        }
        else if (year % 400 == 0) {
            flag = true;
        }
    }
    else {
        flag = false;
    }  

    if (flag) {
        printf("Leap year");
    } 
    else {
        printf("Not a leap year");
    }
}