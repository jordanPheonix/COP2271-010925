/*
    A function that prints a description based on the given temperature
*/

#include <stdio.h>

//Prototypes
void temperatureDesc(double temp);
void checkRange(int number); //Checks whether the given number  is within the range [0,10]
void largestNum(int num1, int num2, int num3);


int main(void) {
    int num1; 
    int num2; 
    int num3; 
    
    puts("Enter 3 numbers:");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3); 

    largestNum(num1, num2, num3);
    return 0;
}

//Implementation
void temperatureDesc(double temp) {
    if (temp > 101) {
        puts("High Fever");
    }
    else if (temp > 99) {
        puts("Low Fever");
    }
    else if (temp > 97){
        puts("Normal");
    }
    else {
        puts("Low Temperature");
    }
}

void checkRange(int number) {
    if(number >= 0 && number <= 10 && number % 2 == 0) {
        puts("YES");
    }
    else {
        puts("NO");
    }
}

void largestNum(int num1, int num2, int num3) {
    printf("Analyzing...\nnum1 = %d\nnum2 = %d\nnum3= %d\n", num1, num2, num3);
    if (num1 > num2 && num1 > num3) {
        printf("%d is greatest.\n", num1);
    }
    else if (num2 > num1 && num2 > num3) {
        printf("%d is greatest.\n", num2);
    }
    else if (num3 > num1 && num3 > num2) {
        printf("%d is greatest.\n", num3);
    }
    else {
        puts("The numbers are equal.");
    }
}

/*
    Other logical operators
    || - OR
    ! - Negation (makes TRUE --> FALSE)
*/