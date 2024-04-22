
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linear_sort.h"


/*
* @brief This function generates a random integer array of size n
* @param n the size of the array
* @param a the lower bound of the random numbers
* @param b the upper bound of the random numbers
*/
int *randomIntArray(int n, int a, int b) {
    int *array = malloc(n * sizeof(int));
    for (int i = 0;i < n;i++) {
        array[i] = a + rand() % (b - a + 1);
    }

    // return the pointer to the array
    return array;
}

/*
* @brief This function sorts an integer array using the linear sort algorithm
* @param array the array to sort
*/
int *linearSortIntArray(int *array, int n) {
    // Get the number of elements in the array
    printf("%d\n", n);
    // Create a counter of elements in a row that is sorted
    int sortedCount = 0;
    while (1)
    {
        sortedCount = 0;
        for (int i = 0;i < n - 1;i++) {
            if (array[i] > array[i + 1]) {
                // Swap the elements
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                sortedCount = 0;
            }
            else {
                sortedCount++;
            }
        }
        if (sortedCount == n - 1) {
            break;
        }
    }
    return array;    
}








