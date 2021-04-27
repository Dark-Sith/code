#include <stdio.h>

int main(void)
{
    int a,b,c,max;

    printf("数字を三つ入力してください:\n");
    scanf("%d%d%d",&a,&b,&c);

    if (b <= a && c <= a)
    {
        max = a;
    }
    else if (c <= b)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    
    printf("max = %d\n",max);
}