/*
    The program converts the given number of seconds to HMS

    Ex) 65 seconds --> 0 hours, 1 minute, 5 seconds

*/

#include <stdio.h>

int main(void) {
    int seconds = 0;
    int remaining_seconds = 0;
    int minutes = 0;
    int remaining_minutes = 0;
    int hours = 0;
    int remaining_hours = 0;
    int days = 0;

    //Get the number of seconds
    puts("Enter the number of seconds:");
    scanf("%d", &seconds);

    //Calculations
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;

    //Calculate remaining seconds/minutes/hours
    remaining_seconds = seconds % 60; //same, but shorter than, "seconds = seconds - 60 * minutes"
    remaining_minutes = minutes % 60;
    remaining_hours = hours % 24;

    //Print result (with multi-line printf function)
    printf("%d seconds is %d days, %d hours, %d minutes, and %d seconds.\n", 
        seconds, 
        days,
        remaining_hours,
        remaining_minutes, 
        remaining_seconds);


    return 0;
}