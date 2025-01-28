/*
    Practice with non-void functions
*/

#include <stdio.h>

//Funtion Prototypes
//Prevents errors from defining functions after they are called in the code; compiler will do this automatically, but doing it for the compiler is important
int getFive(void); 

void printCourse(int course_number);

void weather (int temperature);

int main(void){
    int var = 0;
    
    var = getFive();

    printf("%d\n", var);

    printCourse(2207);

    weather(45);

    return 0;
}

int getFive(void) {
    int five = 5; //local variable, only 'visiable' to the function it was created within

    return five;
}

void printCourse(int course_number) {
    printf("%d\n", course_number);
}

void weather(int temperature){
    if (temperature > 75) {
        printf("The weather is warm\n");
    }
    else {
        printf("The weather is cold\n");
    }    
}