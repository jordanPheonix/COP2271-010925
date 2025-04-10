/*

    Jordan Dexter
    COP2271 Section 5
    4/10/25

    A+:

    Notes:


*/

#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30
#define STREET_SIZE 30
#define CITY_SIZE 30
#define CLASS_SIZE 48

typedef struct {
    char street[STREET_SIZE];
    char city[CITY_SIZE];
    int zip_code;
} Address;

typedef struct {
    //The members (variables) of a structure
    char first_name[NAME_SIZE];
    int age;
    Address home_address;
} Student;

typedef struct{
    int students;
    Student roaster[CLASS_SIZE];
} Class;

void printStudentInfo(const Student *st);
void printAddress(const Address *adr);
Student createStudent(char *name, int age, char *city, char *street, int zip_code);
void printClassRoaster(const Class *cl);

int main () {
    Address adr = {.city = "Lakeland", .street = "Main", .zip_code = 12345};
    //printAddress(&adr);

    Student st1= {.first_name = "Mike", .age = 20, .home_address = {.city = "Tampa", .street = "Orange", .zip_code = 32875}};
    //printStudentInfo(&st1);

    Student st2 = createStudent("Bob", 34, "Orlando", "Apple", 34867);
    //printStudentInfo(&st2);

    Class COP2271 = {.students = 2, .roaster = {st1, st2}};
    //printClassRoaster(&COP2271);
    

    Student st3 = createStudent("Konsrantin", 32, "Kalingrad", "Krasnaya", 38728);
    //COP2271.roaster[COP2271.students++];


    return 0;
}

void printStudentInfo(const Student *st) { //uses, through a pointer, the actual structure
    printf("First name:\t\t%s\n", st->first_name);
    printf("Age:\t\t\t%d\n", st->age);
    printAddress(&st->home_address);
}

void printAddress(const Address *adr) {
    printf("%s\n%s\n%d\n", adr->street, adr->city, adr->zip_code);
}

Student createStudent(char *name, int age, char *city, char *street, int zip_code) {
    Student st;
    strcpy(st.first_name, name);
    strcpy(st.home_address.city, city);
    strcpy(st.home_address.street, street);
    st.age = age;
    st.home_address.zip_code = zip_code;
    return st;
}

void printClassRoaster(const Class *cl) {
    for (int i = 0; i < cl->students; i++) {
        printStudentInfo(&cl->roaster[i]);
    }
}