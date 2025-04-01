/*

    Jordan Dexter
    COP2271 Section 5
    4/1/25

    A+: 

    Notes:
    // The board's piss filter has now taken over the entire screen
    // <datatype> <array_name>[rows][collumns] -- 2d array

*/

//Libraries
#include <stdio.h>

//Symbolic Constants
#define ROW 4
#define COL 4

//Function Prototypes

void printArr(int rows, int cols, const int arr[rows][cols]);
void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val);
void setCol(int rows, int cols, int arr[rows][cols], int col_num, int val); //not gonna do rn
int total(int rows, int cols, const int arr[rows][cols]);

int main (int argc, char *argv[]) {
    //Create and intialize a 2d array of ints
    int arr[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //Access an element
    printf("%d\n", arr[0][1]);

    //Change the value of the element
    arr[1][1] = 10;

    //Print an array
    printArr(ROW, COL, arr);

    //Set the second row with 99's
    setRow(ROW, COL, arr, 1, 99);
    
    printArr(ROW, COL, arr);

    //Get sum
    printf("The sum is %d\n", total(ROW, COL, arr));

    return 0;
}

//Function Definitions

void printArr(int rows, int cols, const int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i][j]);
        }
        puts("");
    }
    puts("");
}

/*************************************/

void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val) {
    for (int j = 0; j < cols; j++) {
        arr[row_num][j] = val;
    }
}

/*************************************/

int total(int rows, int cols, const int arr[rows][cols]) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

/*************************************/



/*************************************/



