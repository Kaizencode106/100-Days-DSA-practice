/*
Write a program to perform addition of two matrices having the same dimensions.
The sum of two matrices is obtained by adding corresponding elements of the matrices.
*/
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    int A[rows][cols];
    int B[rows][cols];
    int Sum[rows][cols];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}