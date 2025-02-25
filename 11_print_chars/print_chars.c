/*
    for (<counter_intialization>; <condition>; <incriment>)
*/

#include <stdio.h>

//function prototypes



int main (void) {
    

    //get the uppercase character
    char input;
    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input); //add a space in front of %c for a reason cause "trust me bro"
    } while (input < 'A' || input > 'Z'); //ASCII decimal code for all capital letters runs from 65 to 90 (A to Z respectively)

    

    //get the positive integer
    int second_input;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &second_input);
    } while (second_input <= 0);

    //print the scanned char the integer number of times

    for (; second_input > 0; --second_input) { //initalizing a variabe in the for loop is optional assuming you have a variale ready to go already
        printf("%c", input);
    }
    puts(""); // newline after itteration


    return 0;
}

//function definitions



/**********************/


