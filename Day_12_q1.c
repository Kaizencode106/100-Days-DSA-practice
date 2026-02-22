/*
Write a program to check whether a given matrix is symmetric. 
A matrix is said to be symmetric if it is a square matrix and is equal to its transpose 
(i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).
*/
#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    int matrix[n][n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
    }

    if(isSymmetric)
        printf("Symmetric Matrix\n");
    else
        printf("Not Symmetric Matrix\n");

    return 0;
}