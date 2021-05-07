#include <stdio.h>

int mccarthy91(int input);

int main(void)
{
    int input;//user input

    printf("McCarthyの91関数を出力するcプログラム。\n");
    printf("数字を入力してください >>> ");
    scanf("%d",&input);
    
    printf("McCarthy(%d) = %d\n",input, mccarthy91(input));

    return 0;
}

/*
Function that defines method McCarthy91
McCarthyの91関数を再帰的を用いずに定義する
*/
int mccarthy91 (int input)
{
    int ind = 1;
    /*
    The integer variable ind is used to symbolise the amount of f(x) is run throughout the whole program.
    The program will end when indicator reaches zero.
    For example, 
    ind = 1 then if input = 99, input = 110 (>100), ind = 2 then input = 100, ind = 1 then input = 111, ind, = 2, then input = 101, ind = 1, then input = 91, ind = 0 and ends the program
    With ind as the indicator, all input will always end at ind = 0 while input = 91.
    */
    
    while (ind != 0)
    {
        if (input > 100)
        {
            input -= 10;
            ind--;//break out of current f(x)
        }
        else
        {
            input = input + 11;
            ind++;//run f(x) once more inside existing f(x)
        }
    }
    return input;//return user input as the McCarthy-91 result
}
/*
実行結果:
chuahhm@chuahhm-PC:~/Documents/proA1$ ./mccarthy-91-nonrecursive 
McCarthyの91関数を出力するcプログラム。
数字を入力してください >>> 99
McCarthy(99) = 91
chuahhm@chuahhm-PC:~/Documents/proA1$ 
*/