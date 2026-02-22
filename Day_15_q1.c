/*
Given a matrix, calculate the sum of its primary diagonal elements. 
The primary diagonal consists of elements where row index equals column index
*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < rows && i < cols; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of primary diagonal = %d\n", sum);

    return 0;
}