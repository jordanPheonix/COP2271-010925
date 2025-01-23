/*
    User Input
*/

#include <stdio.h>

int main(void){

    int square_side = 1;
    int square_perimeter = 0;
    int square_area;

    //Write the prompt
    puts("Enter the side of a square."); //Equivelent to doing printf with \n

    //get the input
    scanf("%d", &square_side); //sanf("<conversion specifier(s)>", &<var_name>) || & - address modifier (looks for input from user keyboard, writes it onto variable)

    //Do the math
    square_perimeter = square_side * 4;

    //Create the output
    printf("The perimeter of a square with a side length of %d is %d.\n", square_side, square_perimeter);

    return 0;
}