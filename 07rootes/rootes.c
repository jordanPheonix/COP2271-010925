/*
    The program calculates the roots of the quadratic equation

    ax^2 + bx + c = 0
*/

#include <stdio.h>
#include <math.h> //add "-lm" to the end of the gcc command to compile (ex: gcc rootes.c -lm)

//Function prototypes
void printPrompt(char c); //char - character datatype (technically stores the character as its ASCII code (that's probably why you can't hold a string in here))
int getCoefficient(void);
int countDiscriminant(int a, int b, int c);
void printRootes(int a, int b, int c);

int main(void) {
    //get a
    printPrompt('a'); //characters should be in '' (single quotes)
    int a = getCoefficient();

    //get b
    printPrompt('b');
    int b = getCoefficient();

    //get c
    printPrompt('c');
    int c = getCoefficient();

    //calculate roots
    printRootes(a, b, c);

    return 0;
}

//Function Declarations
void printPrompt(char c) {
    printf("Enter the coefficient: %c: ", c);

}

/************************/
int getCoefficient(void){
    int coef = 0;
    scanf("%d", &coef);
    return coef;
}

/************************/
int countDiscriminant(int a, int b, int c) {
    // b^2 - 4ac
    return (b*b) - (4*a*c);
}

/************************/
void printRootes(int a, int b, int c){
    int discrim = countDiscriminant(a,b,c);
    if (discrim < 0) {
        puts("No real rootes");
    }
    if (discrim == 0) {
        //-b / 2a
        double x = (-b) / (2*a);
        printf("x = %f\n", x);
    }
    if (discrim > 0) {
        //-b +/- sqrt(discrim) / 2a
        double x1 = ((-b) + sqrt(discrim)) / (2*a);
        double x2 = ((-b) - sqrt(discrim)) / (2*a);
        printf("x1 = %f, x2 = %f\n", x1, x2);
    }

}