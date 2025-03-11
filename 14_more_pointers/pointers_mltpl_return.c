/*
    Jordan Dexter
    3/11/2025
    COP2207 Sect. 5

    A+ : EMNFX

    Notes:
    

*/

#include <stdio.h>

//function prototypes

//Split the given 2 digit integer into tens and ones; Return 0 if the number is 2 digit; Return 1 otherwise
int splitDigits (int n, int *tens_ptr, int *ones_ptr);
void sumAndAvg (double d1, double d2, double *sum, double *avg);

int main (void) {
    int n = 0;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);

    int tens = 0, ones = 0;
    splitDigits(n, &tens, &ones);

    printf("%d has %d tens and %d ones\n", n, tens, ones);

    //We have ones and tens
    double sum = 0; //the sum of ones and tens
    double avg = 0; //the average of ones and tens

    sumAndAvg((double) tens, (double) ones, &sum, &avg); //(datatype) <var> tells the compiler to convert to a datatype; ints can be converted to doubles automatically
    printf("The sum %.2lf;\nThe average %.2lf\n", sum, avg);

    return 0;
}

//function defintions

int splitDigits (int n, int *tens_ptr, int *ones_ptr) {
    // n % 10 will give the second digit; n / 10 will give the first digit
    *tens_ptr = n / 10;
    *ones_ptr = n % 10;

    if (n < 10 || n > 99) {
        puts("Not a 2 digit number");
        return 1;
    } else {
        return 0;
    }
}

/******************************************/

void sumAndAvg (double d1, double d2, double *sum, double *avg) {
    *sum = d1 + d2;
    *avg = *sum / 2;
}