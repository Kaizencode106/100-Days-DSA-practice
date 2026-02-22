/*
 Given a sorted array of n integers, remove duplicates in-place.
  Print only unique elements in order.
*/
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n == 0) {
        return 0;
    }

    int uniqueIndex = 0;

    for(i = 1; i < n; i++) {
        if(arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    for(i = 0; i <= uniqueIndex; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}