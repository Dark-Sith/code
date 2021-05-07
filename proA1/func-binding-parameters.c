#include <stdio.h>
void call_by_value(int);
void call_by_reference(int *);
/*
Call by value:
A copy of the value is passed into the function
Changes made inside the function is limited to the function only. The values of the actual paremeters do not change by changing the formal parameters
Actual and formal arguments are created at the different memory location

Call by reference:
An address of value is passed into the funtion
Changes made inside the function validate outside of the funtion also. The values of the actual parameters do change by changing the formla paramters
*/

int main(void)
{
    int a = 1;

    printf("%d\n", a);
    call_by_value(a);
    printf("%d\n", a);//a value remain the same
    call_by_reference(&a);
    printf("%d\n", a);//a value changes

    return 0;
}

void call_by_value(int a)
{
    a = 777;
}

void call_by_reference(int *a)
{
    *a = 777;
}