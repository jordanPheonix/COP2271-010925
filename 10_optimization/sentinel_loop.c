/*

    <variable> <operator>= <value>; - equivilent to <variable> = <varibale> <operator> <value>;
    ex) "c += 1;" is the same as: "c = c + 1;"

    Post: <variable><++ OR -->; - incriments/decriments by 1 *after* the original value is used
    Pre: <++ OR --><variable>; - incriments/decriments by 1, *then* use the new value

*/

//function prototypes

double avgStudentGradesSentinel(void);

#include <stdio.h>

int main(void) {
    printf("%.2lf\n", avgStudentGradesSentinel());
    return 0;
}

//function definitions

double avgStudentGradesSentinel(void) {
    double grade = 0;
    int num_grades = 0;
    double total_grade = 0;

    while(grade != -1) { //-1 is a sentinel value, because the loop will infinitely repeat until the condition is met
        //Get the grade
        printf("Enter the grade (-1 to exit): ");
        scanf("%lf", &grade);

        if (grade != -1) { //prevents -1 from being counted as an entered grade
            total_grade += grade;
            ++num_grades;
        }
    }

    if (num_grades == 0) { //prevents division by 0
        num_grades = 1;
    }
    
    return total_grade/num_grades;
}