#include <stdio.h>

int main(void)
{
    int a,b,c,max;

    printf("数字を三つ入力してください:\n");
    scanf("%d%d%d",&a,&b,&c);
    
    printf("max = %d\n",(a<b)?(b<c ? c : b):(a<c ? c : a));
    /*
    ? is the symbol of the ternary operator
    Example: a = (b==0) ? 1 : 0;
    a will have the value 1 if b is equal to 0, and 0 otherwise.
    */
}