/*
第２回レポート課題3
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <string.h>
int str_chnum (const char *str, char c);

int main(void)
{
    char str[256], c;
    int count = 0;
    printf("文字列を入力して下さい:");
    fgets(str,sizeof(str),stdin);
    printf("検索する文字を入力して下さい:");
    c = getchar();
    count = str_chnum (str,c);
    printf("その文字は%d個含まれています.\n",count);

    return 0;
}

int str_chnum (const char *str, char c)
{
    int i, count=0;
    for (i=0;i<str[i];i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    return count;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai4_3_t20b345b kadai4_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai4_3_t20b345b 
文字列を入力して下さい:I have an apple
検索する文字を入力して下さい:a
その文字は3個含まれています.
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
