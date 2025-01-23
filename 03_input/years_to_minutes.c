/*
    Converting Years of Age (Input) to Minutes
*/

#include <stdio.h>

int main(void) {
    int years = 0;
    int minutes = 0;

    //get input
    puts("How old are you in years?");
    scanf("%d", &years);

    //math
    minutes = years * 31536000;

    //output
    printf("If you are \"%d\" years old, you have lived for \"%d\" minutes.", years, minutes); // \" prints a " in the console

    return 0;
}