/*

    The introduction to variables

*/

// Preprocessor directive
// stdio - standard input output
# include <stdio.h>

//Create a main function
int main(void){
    // Create a variable
    int first_number; //<datatype> <var_name>
    // Assign the value to a variable
    first_number = 100;

    // Create and intialize
    int second_number = -19;

    // Print the value of a variable
    printf("The first number is %d\n", first_number); //%d is a conversion specifier

    // Print the value of the second number
    printf("The second number is %d\n",second_number);

    // Create a sum of two numbers
    int sum = first_number + second_number;
    printf("%d + %d = %d\n", first_number, second_number, sum); 
    // The conversion specifier will take on the value of the variable specified in it's respective order in the sequence.



    return 0;
}