/*

    Jordan Dexter
    COP2271 Section 5
    4/3/25

    A+: PFWHZ

    Notes:
    - The whiteboard piss filter has a ring of blue in it now
    - 


*/

//Libraries
#include <stdio.h>

//Symolic Constants
#define ROW 5
#define COL 5

//Function Prototypes



int main (void) {
    double arr[ROW][COL] = {};

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = 5 * i + j + 1;
        }
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%7.2lf", arr[i][j]);
        }
        puts("");
    }
    puts("");

    arr[0][1] = 24.0;
    arr[2][2] = 43.0;

    arr[ROW - 1][COL - 1] = 377.00;

    printf("***************************\n");
    
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%7.2lf", arr[i][j]);
        }
        puts("");
    }
    puts("");

    return 0;
}

//Function Definitions



/************************************/



/************************************/



/************************************/



/************************************/



/************************************/


