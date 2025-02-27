/*
    2-27-2025


*/

#include <stdio.h>

//function prototypes

void printChars(void);
void setToZero(int *n);
double productPointers(double *p1, double *p2);

int main(void) {
    //printChars(); //was for practice

    int luck = 100;

    //Access
    printf("%d\n", luck);

    //Modify
    luck += 10;

    //print the address of the luck var
    printf("The address of luck is %p\n", &luck); // %p looks to print an address; &<var> references a var's address

    //Create a pointer var
    // <data_type> *pointer_name;
    
    int *luck_ptr = &luck;

    //Access the data the pointer is pointing to
    // * - dereferencing operator

    printf("Dereference luck_ptr %d\n", *luck_ptr); //prints the value stored in the variable which the pointer has the address of

    //Modify  the  data through the pointer
    *luck_ptr = 300;
    printf("The value of luck after modifcation = %d\n", luck);

    //Passing by-reference
    setToZero(&luck);
    printf("The value of luck after setting it to zero = %d\n", luck);

    //Practice
    double p1 = 0;
    double p2 = 0;
    printf("Enter two numbers to be multiplied together: ");
    scanf("%lf", &p1);
    scanf("%lf", &p2);

    printf("The product of p1 and p2 is = %.2lf\n", productPointers(&p1, &p2));

    return 0;
}

//function definitions

void printChars(void) {
    char outer = 'A';
    while (outer <= 'Z') {
        char inner = 'A';
        while (inner <= 'Z'){
            if (outer != inner && inner != (outer - 1)) {
                printf("%c%c\n", outer, inner);
            }
            
            inner++;
        }

        outer++;
    }
    
}


/*************************/

void setToZero(int *n) {
    *n = 0; //can now reference/manipulate the local varof another function who's address is input into the function; called 'passing by-reference'
}

double productPointers(double *p1, double *p2) {    
    return *p1 * *p2;
}