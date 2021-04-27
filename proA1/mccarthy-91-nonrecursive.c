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
    int ind = 1;//indicator
    
    while (ind != 0)
    {
        if (input > 100)
        {
            input -= 10;
            ind--;
        }
        else
        {
            input = input + 11;
            ind++;
        }
    }
    return input;
}