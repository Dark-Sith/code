#include <stdio.h>

int mccarthy91(int input);

int main(void)
{
    int input;

    printf("McCarthyの91関数を出力するcプログラム。\n");
    printf("数字を入力してください >>> ");
    scanf("%d",&input);
    
    printf("McCarthy(%d) = %d\n",input, mccarthy91(input));

    return 0;
}

int mccarthy91 (int input)
{
    if (input > 100)
    {
        return input - 10;//f(x) = x - 10 if x > 100
    }
    else
    {
        return mccarthy91(mccarthy91(input + 11));//f(x) = f(f(x+11))
    }
}