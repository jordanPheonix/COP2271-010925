/*
    2/25/2025

    

*/

#include <stdio.h>

//function prototypes
void printTriangleTopLeftStars(int size);
void printTriangleBottomLeftStars(int size);

int main(void) {
    //variable initialization
    int n = 0;

    //logic
    
    //scan a positive integer
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    int i = 1;
    while (i < 10) {
        printTriangleTopLeftStars(n);
        printTriangleBottomLeftStars(n);
        i++;
    }

    return 0;
}

//function definitions

void printTriangleTopLeftStars(int size){
    for (int i = 0; i < size; i++) { //counting collumns top to bottom
        for (int j = 0; j < size - i; j++) { //counting rows from left to right
            printf("%c",'*');
        }
        puts(""); //newline
    }
}

/**********************/

void printTriangleBottomLeftStars(int size) {
    for (int i= 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
        }
        puts(""); //newline
    }
}