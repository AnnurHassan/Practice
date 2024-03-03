#include <stdio.h>

int main() {

    //initializing a muitidimensional array with datatype and row and col
    // 1, 2, 3
    // 4, 5, 6
    // 7, 8, 9
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    //initializing a empty multidimensional arary 
    int matrix2[3][3]; 

    // length of matrix1 is number of rows.
    int row1 = sizeof(matrix1) / sizeof(matrix1[0]);
    int col1 = sizeof(matrix1[0]) / sizeof(int);
    printf("Row: %d\nCol: %d\n", row1, col1);

    //row, col of martrix2
    int row2 = sizeof(matrix2) / sizeof(matrix2[0]);
    int col2 = sizeof(matrix2[0]) / sizeof(int);
    printf("Row: %d\nCol: %d\n", row2, col2);

    // printing values of matrix1 using loop
    printf("Matrix1 : \n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    // inserting values to matrix2
    int num = 0;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            num += 1;
            matrix2[i][j] = num;
        }
    }

    // printing values of matrix2 using loop
    printf("Matrix2 : \n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    } 
}