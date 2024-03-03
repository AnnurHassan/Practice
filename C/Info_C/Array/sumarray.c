#include <stdio.h>

int main() {

    //Initializing an array
    int arr[5] = {1, 2, 3, 4, 5};

    //Initializing a multidimensional array
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    printf("=================\n");
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //sum of the values in Array
    int sum;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of Array: %d\n", sum);
    printf("=================\n");

    printf("Matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    //sum of the values in Matrix
    sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Sum of Matrix: %d\n");
    printf("=================\n");

}