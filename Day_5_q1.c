/*
A system receives two separate logs of user arrival times from two different servers.
 Each log is already sorted in ascending order. 
 Your task is to create a single chronological log that preserves the correct order of arrivals
*/
#include <stdio.h>

int main() {
    int n1, n2, i;

    scanf("%d", &n1);
    int log1[n1];

    for(i = 0; i < n1; i++) {
        scanf("%d", &log1[i]);
    }

    scanf("%d", &n2);
    int log2[n2];

    for(i = 0; i < n2; i++) {
        scanf("%d", &log2[i]);
    }

    int merged[n1 + n2];

    int p1 = 0, p2 = 0, k = 0;

    while(p1 < n1 && p2 < n2) {
        if(log1[p1] <= log2[p2]) {
            merged[k++] = log1[p1++];
        } else {
            merged[k++] = log2[p2++];
        }
    }

    while(p1 < n1) {
        merged[k++] = log1[p1++];
    }

    while(p2 < n2) {
        merged[k++] = log2[p2++];
    }

    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}