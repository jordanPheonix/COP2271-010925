/*

    Jordan Dexter
    COP2271 Sect 5
    3/35/35

    A+: 65urj

    Notes:

    char c [] = "<text>" -- creates a string
    at the end of a string, a null character "\0" indicates the end of a string
    char c [] = {'b', 'l', 'u', 'e', '\0'}; -- alternative initalization of a string

*/

#include <stdio.h>
#include <stdbool.h> //booleans -- T or F vars
#include <ctype.h> //full of functions that basically do everything in the functions made during the lesson (see Google or lesson slides)


//symbolic constants



//function prototypes

bool isUpper(char c); //checks if the given character is uppercase

bool isLower(char c); //checks if the given charcter is lowercase

bool isAlpha(char c); //checks if the given character is a letter

bool isAlNum(char c); //checks if the given character is a letter or a digit

int toLower(char c);

int main (void) {
    //create a character
    char c = 'B';

    //create a boolean var
    const bool isHappyAfterSecondExamInIntroClass = 0; //0 = false; 1 = true; works the other way around too

    //test isUpper
    printf("isUpper(%c) = %d\n", c, isUpper(c));

    //test isLower
    printf("isLower(%c) = %d\n", c, isLower(c));

    //test isAlpha
    printf("isAlpha(%c) = %d\n", c, isAlpha(c));

    //test isAlNum
    printf("isAlNum(%c) = %d\n", c, isAlNum(c));

    /*********************************************/
    puts("");

    //create a string
    char str[] = "HeLl0 ThErE!"; //array length = 12 + 1 (12 charcters + 1 null character)

    //printing the string
    puts("Printing with printf:");
    printf("%s\n\n", str); //why tf does C have an operator to print strings but not a datatype for them????

    puts("Printing with a loop:");
    for (int i = 0; str[i] != '\0'; i++) { //will continue until the end of the string, "\0"
        printf("%c", str[i]);
    }
    printf("\n\n");

    puts("Printing with puts");
    puts(str);
    puts("");

    puts("Print the string in lowercase:");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toLower(str[i])); //equivelent to printf("c");
    }
    printf("\n\n");

    return 0;
}

//funcion definitions

bool isUpper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return true;
    } else {
        return false;
    }
}

/***********************************/

bool isLower(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    } else {
        return false;
    }
}

/***********************************/

bool isAlpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    } else {
        return false;
    }
}

bool isAlNum(char c) {
    if (isAlpha(c) == true || (c >= '0' && c<= '9')) {
        return true;
    } else {
        return false;
    }
}

int toLower(char c) {
    if (isUpper(c) == true) {
        return c + 32;
    } else {
        return c;
    }
}