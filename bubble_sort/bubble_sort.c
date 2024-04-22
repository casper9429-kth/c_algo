#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble_sort.h"


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
* @brief This function sorts an integer array using the bubble sort algorithm
* @param array the array to sort
* @param n the number of elements in the array
*/
int *bubbleSortIntArray(int *array, int n) {
    // Get the number of elements in the array
    printf("%d\n", n);

    // Iterate through the array 
    for (int i = 1;i < n ;i++) {
        // Compare this element with the previous one
        if (array[i] < array[i - 1]) {
            // Swap the elements
            swap(&array[i], &array[i - 1]);
            
            // TODO: iterate backwards to check if the element is in the right place
            for (int j = i -1;j > 0;j--) {
                if (array[j] < array[j - 1]) {
                    swap(&array[j], &array[j - 1]);
                }
                else {
                    break;
                }
            }
        } 
    }
    return array;
}


/*
* @brief This function swaps two integers
* @param a the address of the first integer
* @param b the address of the second integer
*/
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

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
    int *sortedArray = bubbleSortIntArray(array,n);
    for (int i = 0;i < n;i++) {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");
}