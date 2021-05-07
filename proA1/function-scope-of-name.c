#include <stdio.h>

void sub(void);

int a = 1;

int main(void)
{
    int a = 22;
    printf("(1) %d\n", a);//print a from line 8

    {
        int a = 333;
        printf("(2) %d\n", a);//print a from line 13
    }

    printf("(3) %d\n", a);//print a from line 10
    sub();

    return 0;
}

void sub(void)
{
    int b = 4444;

    printf("(4) %d\n", a);//print a from line 5
    printf("(5) %d\n", b);//print b from line 25
}