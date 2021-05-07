#include <stdio.h>

int main(void)
{
    int k,i;
    double factorial;

    printf("何の階段を求めますか?:");
    scanf("%d",&k);

    factorial = 1.0;
    for (i = 2; i <= k ; i++)
    {
        factorial *= (double)i;
    }

    printf("%d! = %21.16g\n",k,factorial);

    return 0;
}