#include <stdio.h>

int main(void){

    //Q-1
    #if 0
    /*
        This is the first program of the training
            Program to check on nested comments result
        /**/
    */
    #endif

    printf("Hello World\n");

    //Q-2
    #if 0
    char x=0;
    char y=x;
    printf("%d %d\n", x, y);
    #endif

    //Q-3
    char c1=65, c2='b',c3='3';
    printf("%c %d\n", c1, c1);
    printf("%c %d\n", c2, c2);
    printf("%c %d\n", c3, c3);

    return 0;
}

/*
    Nested comments code gives a compilation error.
    "
    test.c: In function ‘main’:
    test.c:11:6: error: expected expression before ‘/’ token "*""/"
    "
*/
