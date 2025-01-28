#include <stdio.h>

//A function prototype solves errors involving functions being created/defined after it is called (like two() in one_three())
void two(void);
void one_three(void);


void one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
}

int main(void) {
    puts("Starting now:");
    one_three();
    puts("Done!");
    return 0;
}

void two (void) {
    printf("two\n");
}