/*

    Jordan Dexter
    COP2271 Section 5
    4/15/25

    A+: ??

    Notes:


*/

#include <stdio.h>



int main(int argc, char *argv[]) {
    //create a pointer to a file structure
    FILE *file = NULL;

    //Open the file
    // fopen - creates the file and returns the pointer to FILE
    file = fopen("out.txt", "r");

    //Check if the file was opened
    if (file == NULL) {
        puts("File could not be opened");
        return 1;
    }

    //read from a file
    int i = 1;
    //feof - file, end of file
    while (!feof(file)) {
        fscanf(file, "%d", &i);
        printf("%d\n", i);
    }


    //close the file
    fclose(file);


    return 0;
}