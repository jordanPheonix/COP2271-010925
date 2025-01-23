#include <stdio.h>

void two (void) {
    printf("two\n");
}

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