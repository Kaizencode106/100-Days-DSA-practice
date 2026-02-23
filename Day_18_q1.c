/*
Given an array of integers, rotate the array to the right by k positions.
*/
#include <stdio.h>

void rotate(int arr[], int n, int k) {
    int temp[n]; 

    k = k % n;

    for (int i = 0; i < n; i++) {
        int new_index = (i + k) % n;
        temp[new_index] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    rotate(arr, n, k);

    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}