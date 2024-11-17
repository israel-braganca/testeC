#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x; //declares a variable
    x = 10; //indents a variable
    int y = 20; //this is also valid
    float grade = 9.7; //float variable
    char score = 'A'; //this is a char variable

    printf("Hello world!\n");
    printf("i love the number %d\n", x); //prints interger
    printf("i am %d years old\n", y);
    printf("your grade is %.1f\n", grade);
    printf("your score is %c", score);
    return 0;
}
