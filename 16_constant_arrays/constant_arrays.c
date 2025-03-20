/*

    Jordan Dexter
    COP2271 Section 5
    3/20/2025

    A+:9JMV5

    Notes:

    <datatype> <name>[(size)] = {(index0), (index1), (index2), ...} -- initalizing and defining an array; if (size) is not defined, it will take on the number
        of indexed items as its size automatically; Remember: the index starts at 0, and unlike Python, you need to take extra care not to reference an index
        outside of the array.
    <name>[index] -- referencing a specific index of an array. Note the above cautions.


*/

#include <stdio.h>

#define SIZE 10

//function prototypes
void printDoubledArray(const int *arr, int size); //Print the double values of the given array
//searching in arrays (linear search)
/*
 Search for the location of the first zero in the array and return its location;
 Return -1 if there are no zeros

*/
int firstZero(const int *arr, int size);
int lastZero(const int *arr, int size);
int hasEvenZeros(const int *arr, int size); //1 if even 0s; 0 if odd zeros; -1 if no zeros


int main (void) {
    const int a[SIZE] = {1,2,3,4,5,6}; //"const" prevents the editiing of the values within the array or the value of a variable (in a more general use)

    printDoubledArray(a, SIZE);

    int first_zero = firstZero(a, SIZE);
    if (first_zero == -1) {
        puts("There are no zeros");
    } else {
        printf("The index of the first zero is %d\n", first_zero);
    }

    int last_zero = lastZero(a, SIZE);
    if (last_zero == -1) {
        puts("There are no zeros");
    } else {
        printf("The index of the last zero is %d\n", last_zero);
    }
    


    return 0;
}

//function definitions

void printDoubledArray(const int *arr, int size) {
    for (int i = 0; i <  size - 1; i++) {
        printf("%d, ", arr[i] * 2);
    }
    printf("%d", arr[size - 1] * 2);
    puts("");
}

/************************************/

int firstZero(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    //no zeros
    return -1;
}

int lastZero(const int *arr, int size) {
    for (int i = size - 1; i > 0; i -= 1) {
        if (arr[i] == 0) {
            return i;
        }
    }
    //no zeros
    return -1;
}

int hasEvenZeros(const int *arr, int size) {
    int zeros = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zeros++;
        }
    }

    if (zeros == 0) {
        return -1;
    } else if (zeros % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}