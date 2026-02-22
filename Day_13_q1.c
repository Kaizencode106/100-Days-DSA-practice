/*
You are given a rectangular matrix of integers.
Starting from the outer boundary, traverse the matrix in a clockwise manner
and continue moving inward layer by layer until all elements are visited.
*/#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while(top <= bottom && left <= right) {

        for(int j = left; j <= right; j++)
            printf("%d ", matrix[top][j]);
        top++;

        for(int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        if(top <= bottom) {
            for(int j = right; j >= left; j--)
                printf("%d ", matrix[bottom][j]);
            bottom--;
        }

        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }

    return 0;
}
