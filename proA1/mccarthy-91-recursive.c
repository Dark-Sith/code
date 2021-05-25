/*
再帰的にをに用いてMcCarthyの91関数を出力するプログラミング
*/
#include <stdio.h>

int mccarthy91(int input);

int main(void)
{
    int input;//ユザーから数字を入力してもらう

    printf("McCarthyの91関数を出力するcプログラム。\n");
    printf("数字を入力してください >>> ");
    scanf("%d",&input);
    
    printf("McCarthy(%d) = %d\n",input, mccarthy91(input));

    return 0;
}

//McCarthy91 function using recursive method
int mccarthy91 (int input)
{
    if (input > 100)
    {
        return input - 10;//f(x) = x - 10 if x > 100
        /*
        if input > 100, subtract 10 from input and return it as the result
        x > 100なら結果はx - 10になります
        */
    }
    else
    {
        return mccarthy91(mccarthy91(input + 11));//f(x) = f(f(x+11))
        /*
        if input <= 100, run the McCarthy91 function inside a McCarthy91function but now with adding 10 to the input
        x <= 100ならMcCarthyの91関数にx = x + 11としてまた一回McCarthyの91関数を実行します。
        */
    }
}