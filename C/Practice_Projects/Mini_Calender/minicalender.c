#include <stdio.h>
#include <stdbool.h>

//Fucntions Prototypes
bool is_leap_year(int);
void add_days_to_date(int*, int*, int*, int);

// Keeping track of the total number of days in a month using array to avoid using alot of unnecessary conditionals
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 


int main() {    
    
    int dd, mm, yy, days;

    printf("Please enter a date between 1800 and 10000 (mm dd yy) : ");
    scanf("%d %d %d", &mm, &dd, &yy);
    printf("Please enter the amount of days you want to add to the date: ");
    scanf("%d", &days);

    add_days_to_date(&mm, &dd, &yy, days);

    printf("%d/%d/%d\n", mm, dd, yy);

}

// to check is it is leap year or not
bool is_leap_year(int year) {
    return ((year % 4 == 0) && (year % 100 || year % 400 == 0));
}

// adding number of days to the date and handling all corner cases
void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add) {

    int days_left_in_month;

    while (days_left_to_add > 0) {

        if (*mm == 2 && is_leap_year(*yy)) {
             days_left_in_month = (days_in_month[*mm] + 1) - *dd;
        }
        else {
            days_left_in_month = days_in_month[*mm] - *dd;
        }

        if (days_left_to_add > days_left_in_month) {
        days_left_to_add = (days_left_to_add - days_left_in_month) - 1;

            if (*mm == 12) {
            *mm = 1;
            *dd = 1;
            *yy += 1;
            }
            else {
                *mm += 1;
            *dd = 1;
            }
        }
        else {
        *dd += days_left_to_add;
        days_left_to_add = 0;
        }
    }
}