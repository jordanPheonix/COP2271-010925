/*

    Jordan Dexter
    COP2207 Sect. 5
    3/13/2025

    A+: CJX7K

    Notes:
    - Arrays index their values starting from 0
    - Iniitializing an array: <datatype> <name>[size];
    - Calling a specific indexed value in an array: grades[index_num]

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//symbolic constant - any instance of "SIZE," in this case, will be assigned the value 200
#define SIZE 200

//function prototypes

void printArray(int *arr, int size); //you need to pass the pointer of the array, plus the size, in order to handle an array
void initializeWithRandom(int *arr, int size, int left_bound, int right_bound);

int main (void) {
    srand(time(0));

    //Create an array of 20 integers
    int arr[SIZE];

    //initialize the first element with 999
    arr[0] = 999;

    //Initialize the last element with 111
    arr[SIZE - 1] = 111;

    //Print first and last elements
    printf("First = %d; Last = %d\n\n", arr[0], arr[SIZE - 1]);

    //initialize an array with a loop
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    //Reinitalize an array with values from 10 to 200
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10;
    }

    printArray(arr, SIZE);
    puts("");

    //reinitialize with random numbers from -20 to positive 20
    /*
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % (20 - (-20) + 1) + (-20); //rand() % (upper_bound - lowerbound + 1) + (lower_bound)
    }
    */

    initializeWithRandom(arr, SIZE, 20, -20);

    //printing an array
    /*
    for (int i = 0; i < SIZE - 1; i++) {
        printf("%d, " , arr[i]);
    }
    printf("%d\n", arr[SIZE - 1]);

    return 0;
    */
    printArray(arr, SIZE);
}

//function definitions

void printArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d, " , arr[i]);
    }
    printf("%d\n", arr[size - 1]);
}

/************************************/

void initializeWithRandom(int *arr, int size, int left_bound, int right_bound) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (left_bound - right_bound + 1) + (right_bound); //rand() % (upper/left_bound - lower/right_bound + 1) + (lower/right_bound)
    }
}

