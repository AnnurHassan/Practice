#include <stdio.h>

int main() {

    // initializing array with datatype and length
    int arr1[5];

    // initializing array with datatype and the data itself
    int arr2[] = {1, 3, 5, 7, 9};

    // size of arr1
    int len1 = sizeof(arr1) / sizeof(int);

    //size of arr2
    int len2 = sizeof(arr2) / sizeof(int);

    // inserting values to arr1 using loop
    for (int i = 0; i < len1; i++) {
        arr1[i] = i + 1; 
    }

    // printing values in arr1
    for (int i = 0; i < len1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    //printing values in arr2
    for (int i = 0; i < len2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}