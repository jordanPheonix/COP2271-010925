/*

    Jordan Dexter
    COP2271 Section 5
    3/27/25

    A+: ???

    Notes:

    
*/

#include <stdio.h>
#include <string.h> //deals with strings, adds strlen() etc.
#include <stdbool.h>

//symbolic constants

#define SIZE 1000

//function prototypes

void getString(char *str); //simplist way
void getString2(char *str); //using keyboard input
void getString3(char *str); //character-by-character -- potientally good for when you need to check for certain inputs within a string as they are entered
bool hasSpaces(const char *str);
void makeDuplcates(char *str, int n); //creates n duplicates -- TODO (nuh uh)

//TODO: Check whether the given string is valid
/*
    - at least 1 upper and lower case
    - has at least one digit
    - has no spaces or tabs
    - has {*, $, %, &}
    - length is not less than 8

*/

int main (void) {
    char str1[SIZE];
    char str2[SIZE];
    getString3(str1);
    getString2(str2);

    //check if the string has spaces
    /*
    for (int i = 0; i < strlen(str) - 1; i++){
        if (str[i] == 32) {
            printf("There is a space at index %d of the string.\n", i);
        }
    }
    */


    printf("The first string is \"%s\"\n", str1);
    printf("The second string is \"%s\"\n", str2);
    puts("");


    //copy one string into another
    strcpy(str1, str2); //cpy = copy, simple enough
    printf("The first string is \"%s\"\n", str1);
    printf("The second string is \"%s\"\n", str2);

    //append one string onto another
    strcat(str1, str2); //cat = concatinate, "add onto/combine"
    printf("The first string is \"%s\"\n", str1);
    printf("The second string is \"%s\"\n", str2);

    return 0;
}

//function definitions

void getString(char *str){
    printf("Enter a string: ");
    scanf("%s", str);
}

/*******************************/

void getString2(char *str) {
    printf("Enter the string: ");
    fgets(str, SIZE - 1, stdin); //gets a string of length SIZE - 1 from the keybord (stdin = standard input = keyboard)
    //remove the ending, "\n"
    str[strlen(str) - 1] = '\0'; //strlen(array) -- returns the length of a string (starting at 1, euqal to index 0)
}

/*******************************/

void getString3(char *str) {
    int i = 0;
    printf("Enter the string: ");
    char c = getchar(); //getchar() scans for a single character
    while (i < SIZE - 1 && c != '\n') { //continues until you hit enter or hit the SIZE limit of the array/string
        str[i] = c;
        i++;
        c = getchar();
    }
}

/*******************************/

bool hasSpaces(const char *str){
    if (strchr(str, ' ') == 0) {
        puts("No Spaces");
        return false;
    } else {
        puts("There is a space");
        return true;
    }
}
