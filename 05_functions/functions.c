/*    
    Introduction to functions in C

    Rules:
    - You cannot create nested functions
    - 
*/

#include <stdio.h>

//Function Format
//<return_type> <function_name> (<arguements (parameters, inputs, void)>) { }
void print_course(void) {
    //return type "void" is used when a function doesn't return any value
    printf("You are in COP%d\n", 2271);
} 

void draw_circle(void) {
    printf("   *  \n");
    printf(" *   *\n");
    printf("  * *\n");
}

void draw_caret(void) {
    printf("  / \\\n"); //To print a "\", you use "\\" You need to "escape" (using \) the "\" like you do with a "
    printf(" /   \\\n");
    printf("/     \\\n");

}

void draw_line(void) {
    printf("-------\n");

}

void draw_triangle(void) {
    draw_caret();
    draw_line();
}

void draw_stick_figure(void) {
    draw_circle(); //entering "void" as the arguement for a function accepting "void" arguements doesn't work, just leave blank
    draw_line();
    draw_triangle();
    draw_caret();
}

int main(void) {
    draw_stick_figure();
    return 0;
}