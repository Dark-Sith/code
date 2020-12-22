/*
小レポート3
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <string.h>
char word[100],letter;
int display(int count);

int main(void)
{
    int count, print=0;

    printf("表示回数？ >>> ");
    scanf("%d",&count);
    printf("文字(半角英数字1文字）を入力してください >>> ");
    scanf(" %c",&letter);
    printf("文字列を入力してください >>> ");
    getchar();//最後の\nを取り外す
    fgets(word,100,stdin);
    print=display(count);
    printf("display関数の表示回数：%d回\n",print);

    return 0;
}

int display(int count)
{
    int print;
    for (print=0;print<count;print++)
    {
        printf("Func: Hello World\n");
    }
    printf("入力した文字：%c\n",letter);
    printf("入力した文字列：%s\n",word);

    return print;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport3_t20b345b sreport3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport3_t20b345b 
表示回数？ >>> 5
文字(半角英数字1文字）を入力してください >>> C
文字列を入力してください >>> Chuah Hao Min
Func: Hello World
Func: Hello World
Func: Hello World
Func: Hello World
Func: Hello World
入力した文字：C
入力した文字列：Chuah Hao Min

display関数の表示回数：5回
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
