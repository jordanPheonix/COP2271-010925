/*

    "Write a C program that produces the following console output."

    Name:
    Course ID:
    Student ID:
    Student ID - Course ID is:

*/

#include <stdio.h>

// Create main function
int main(void){
    char *name = "Jordan Dexter"; 
    //*<var_name> creates a character pointer; C language really doesn't like strings, doesn't have a string variable type but you can screw with char to make a "string"
    int course_ID = 2271;
    int student_ID = 19737;
    int sub = student_ID - course_ID;

    printf("Name: %s\nCourse ID: %d\nStudent ID: %d\nStudent ID - Course ID is: %d\n", name, course_ID, student_ID, sub);

    return 0;
}