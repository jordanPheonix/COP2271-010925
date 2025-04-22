#include <ncurses.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>


//gcc snake_game.c -lncurses

#define MAX_SNAKE_SIZE 50

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point body[MAX_SNAKE_SIZE];
    int length;
    int direction;
} Snake;

void initGame(Snake *snake, Point *fruit);
void draw(const Snake *snake, const Point *fruit);
void moveSnake(Snake *snake, Point *fruit);


int main(){
    clear();
    

    //create a snake
    Snake tom;
    Point fruit;

    //intialize the parameters
    initGame(&tom, &fruit);

    while (1) {
        int ch = getch();
        if (ch == KEY_RIGHT || ch == KEY_LEFT || ch == KEY_UP || ch == KEY_DOWN) {
            tom.direction = ch;
        }
        draw(&tom, &fruit);
        moveSnake(&tom, &fruit);
        usleep(20000);
    }

    return 0;
}

void initGame(Snake *snake, Point *fruit) {
    clear();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    timeout(100);

    snake->length = 5;
    snake->direction = KEY_RIGHT;

    for (int i = 0; i < snake->length; i++) {
        snake->body[i].x = 10 - i;
        snake->body[i].y = 10;
    }

    //init the fruit

    fruit->x = rand() % COLS;
    fruit->y = rand() % LINES;
}

void draw(const Snake *snake, const Point *fruit) {

    //print the fruit
    mvprintw(fruit->y, fruit->x, "O");

    //print the snake
    for (int i = 0; i < snake->length; i++) {
        if (i == 0) {
            mvprintw(snake->body[i].y, snake->body[i].x, "@");
        } else {
            mvprintw(snake->body[i].y, snake->body[i].x, "#");
        }
        refresh();
    }
}

void moveSnake(Snake *snake, Point *fruit) {
    Point new_head = snake->body[0];

    if (snake->direction == KEY_RIGHT){
        new_head.x++;
    }
    if (snake->direction == KEY_LEFT){
        new_head.x--;
    }
    if (snake->direction == KEY_DOWN){
        new_head.y++;
    }
    if (snake->direction == KEY_UP){
        new_head.y--;
    }

    //move body

    for (int i = snake->length; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }

    //hit boarder
    if (snake->body[0].x < 0 || snake->body[0].x >= COLS || snake->body[0].y < 0 || snake->body[0].y >= LINES) {
        endwin();
        //printf("Score: %d\n", snake->length - 5);
        exit(0);
    }

    //eat fruit
    if (new_head.x == fruit->x && new_head.y == fruit->y) {
        snake->length++;
        fruit->x = rand() % COLS;
        fruit->y = rand() % LINES;
    }

    snake->body[0] = new_head;
}