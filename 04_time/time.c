/*
    The program converts the given number of seconds to HMS

    Ex) 65 seconds --> 0 hours, 1 minute, 5 seconds

*/

#include <stdio.h>

int main(void) {
    int seconds = 0;
    int remaining_seconds = 0;
    int minutes = 0;
    int hours = 0;

    //Get the number of seconds
    puts("Enter the number of seconds:");
    scanf("%d", &seconds);

    //Calculate number of minutes
    minutes = seconds / 60;

    //Calculate remaining seconds
    remaining_seconds = seconds % 60; //same, but shorter than, "seconds = seconds - 60 * minutes"

    //Print result (with multi-line printf function)
    printf("%d seconds is %d minutes and %d seconds\n", 
        seconds, 
        minutes, 
        remaining_seconds);


    return 0;
}