/*
レポート課題3
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <string.h>
char word[100],letter;
int hello(int count);
int display(int value);
int array();

int main(void)
{
    int count,arraysize,value,print=0;

    printf("表示回数？ >>> ");
    scanf("%d",&count);
    printf("文字(半角英数字1文字）を入力してください >>> ");
    scanf(" %c",&letter);
    printf("文字列を入力してください >>> ");
    getchar();//最後の\nを取り外す
    fgets(word,100,stdin);

    printf("文字・文字列がどっちを表示しますか？\n");
    printf("1. 文字\n");
    printf("2. 文字列\n");
    printf("3. 両方\n");
    scanf("%d",&value);

    print=hello(count);
    display(value);//任意課題:入力された文字・文字列の内容,およびカウント数に応じた応答メッセージを表示する機能
    printf("hello関数の表示回数：%d回\n",print);
    arraysize=array();//2.文字列を表示する場合、表示のための関数で文字数をカウントする
    printf("文字数:%d\n",arraysize);//任意課題:入力された文字・文字列の内容,およびカウント数に応じた応答メッセージを表示する機能

    return 0;
}

int hello(int count)
{
    int print;
    for (print=0;print<count;print++)
    {
        printf("Func: Hello World\n");
    }

    return print;
}

//1.引数の数値に応じて,文字・文字列の表示を切り替える
int display(int value)
{
    //任意課題:入力された文字・文字列の内容,およびカウント数に応じた応答メッセージを表示する機能
    if (value==1)
    {
        printf("入力された文字：%c\n",letter);
    }
    else if (value==2)
    {
        printf("入力された文字列：%s\n",word);
    }  
    else if (value==3)
    {
        printf("入力された文字：%c\n",letter);
        printf("入力された文字列：%s\n",word);
    }

    return 0;
}

//2.文字列を表示する場合、表示のための関数で文字数をカウントする
int array()
{
    int count;
    count=strlen(word);

    return count-1;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai3_t20b345b kadai3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai3_t20b345b 
表示回数？ >>> 2
文字(半角英数字1文字）を入力してください >>> A
文字列を入力してください >>> Amazing
文字・文字列がどっちを表示しますか？
1. 文字
2. 文字列
3. 両方
3
Func: Hello World
Func: Hello World
入力された文字：A
入力された文字列：Amazing

hello関数の表示回数：2回
文字数:7
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
