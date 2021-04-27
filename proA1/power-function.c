#include <stdio.h>

int main(void)
{
    double x, pow, base;
    int y, exp;

    printf("xのy乗を計算します。\n");
    printf("x(実数):");
    scanf("%lf",&x);
    printf("y(非負数整数):");
    scanf("%d",&y);

    if (y < 0)
    {
        printf("Input Error\n");
    }
    
    pow = 1.0;
    base = x;

    for (exp = y; exp > 0; exp /= 2)
    {
        if (exp%2 == 1)
        {
            pow *= base;
        }
        base *= base;
    }

    printf("pow(%g,%d) = %.16g\n", x, y, pow);

    return 0;
}