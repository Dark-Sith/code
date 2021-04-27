#include <stdio.h>

int main(void)
{
    int a,b,c,max;

    printf("数字を三つ入力してください:\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a < b)
    {
        if (b < c)
            max = c;
        else
            max = b;  
    }
    else
    {
        if (a < c)
            max = c;
        else
            max = a;
    }
    
    printf("max = %d\n",max);
}