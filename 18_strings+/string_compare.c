#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, char *argv[]) { //when running the program, run with ./a.out <argc> <argv>; argc = number of inputs; argv = array of inputs
    
    if (argc != 3) { //error prevention
        printf("Use %s <word1> <word2>\n", argv[0]);
        return 0; //tells compiler to stop running the program; can be used like this too end it earlier
    }
    
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    //compare two given words
    int result = strcmp(argv[1], argv[2]); 
    /*
    strcmp() compares strings char-by-char; returns if the ascii code for the char is equal, less than, or greather than
    the code of the respective char in the second string
    */

    if (result > 0) {
        printf("%s goes after %s\n", argv[1], argv[2]);
    } else if (result < 0){
        printf("%s goes before %s\n", argv[1], argv[2]);
    } else {
        puts("Both strings are the same.");
    }
    
}