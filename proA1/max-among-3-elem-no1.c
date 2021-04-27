#include <stdio.h>

int main(void)
{
    int a,b,c,max;

    printf("数字を三つ入力してください:\n");
    scanf("%d%d%d",&a,&b,&c);
    
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;

    printf("max = %d\n",max);
}