/*
    While loop
*/

#include <stdio.h>
#include <unistd.h> //usleep()
#include <stdlib.h> //rand()
#include <time.h> //time()

void whatIf(void);
//Prints HELLO 100 times
void printHello(void);
void printNHello(int n);
int fahrenheitToCelcius(int temp);
void printTemperatures(int min, int max);
void printNRandom(int n);

int main(void) {
    srand(time(0)); //Specifies the seed of random numbers used by rand(); time(0) gives a new seed every run based off of the seconds since C was invented (~1 billion secs)

    //printNHello(25);
    //printTemperatures(0, 90);
    printNRandom(10);


}

void whatIf(void) {

}
/********************/
void printHello(void) {
    /*
        Loops need 3 things:
        1 - counter (initialization) starting value
        2 - condition (when to stop itteration)
        3 - increment (change in counter variable)
    */

    int i = 1; //counter
    while (i <= 100) {
        printf("%d - HELLO!\n", i);
        usleep(30000); //delay input by ms
        i = i + 1;
    }
    
    
}

void printNHello(int n) {
    while (n > 0) {
        printf("%3d - HELLO!\n", n); //adding a number to %[]d forces the program to use that many spaces in its output
        usleep(30000);
        n = n - 1;
    }
}

int fahrenheitToCelcius(int temp) {
    return(temp - 32) * 5 / 9;
}

void printTemperatures(int min, int max) {
    while (min <= max){
        printf("%+5dF - %+3dC\n", min, fahrenheitToCelcius(min)); //the plus sign in the %d forces the otutput to have a + or - sign attached to it
        min = min + 1;
    }
}

void printNRandom(int n) {
    while (n > 0) {
        printf("%d\n", rand() % 10); //returs a random sequence of 0 - 9
        n = n - 1;
    }
}