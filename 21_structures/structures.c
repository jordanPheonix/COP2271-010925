/*
    Jordan Dexter
    COP2271 Section 5
    4/8/25

    A+: 

    Notes:


*/



#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30

//create a structure (new datatype)
struct Student {
    //The members (variables) of a structure
    char first_name[NAME_SIZE];
    int age;

};

void printStudentInfo(const struct Student *st);

int main (int argc, char *argv[]) {
    //create a variale (object) of type int and name it a
    int a;

    //create a variable (object)of another type
    struct Student stud1; //create an object of type struct Student named stud1

    //initialize the members of the structure
    stud1.age = 19;
    strcpy(stud1.first_name, "Nick"); //an annoying, but best way to set an array into a member

    //Create a pointer to int -- review
    int b;
    int *b_ptr= &b;
    *b_ptr; //access to b through b_ptr (dereferecing b_ptr)

    //Create a pointer to the struct Student
    struct Student *stud_ptr = &stud1;
    
    //access the members of the structure through the pointer
    //*stud_ptr.first_name; doesn't work, the "." operator has a higher precidence than "*"
    //(*stud_ptr).first_name; works, but can be simplified -- access with dereferencing
    stud_ptr->first_name; //access with arrow operator; both dereferences stud_ptr and points to the value in first_name

    //access/print the members of the structre
    printStudentInfo(&stud1);

    //Create an initialize the student object (varible), then print it
    struct Student stud2 = { .first_name = "Jack", .age = 20}; //alternative, concise way to initialize
    printStudentInfo(&stud2);

    return 0;
}

/*

void printStudentInfo(struct Student st) { //uses only a copy of Student, not the origional - copy is destroyed after function concludes
    printf("First name:\t\t%s\n", st.first_name);
    printf("Age:\t\t\t%d\n", st.age);
}

*/

void printStudentInfo(const struct Student *st) { //uses, through a pointer, the actual structure
    printf("First name:\t\t%s\n", st->first_name);
    printf("Age:\t\t\t%d\n", st->age);
}