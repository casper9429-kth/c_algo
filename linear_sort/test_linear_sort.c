#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linear_sort.h"


// Test the randomIntArray function and print the array and the sorted array
int main() {
    srand(time(NULL));
    int n = 10;
    int a = 0;
    int b = 100;
    int *array = randomIntArray(n, a, b);
    for (int i = 0;i < n;i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int *sortedArray = linearSortIntArray(array,n);
    for (int i = 0;i < n;i++) {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");


    free(array);
    return 0;
}


