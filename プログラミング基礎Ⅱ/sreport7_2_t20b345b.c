/*
小レポート7(2)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#define MAX 100

int main(void)
{
    FILE *fp;
    char filename[MAX], output;

    printf("ファイル名を読み込んでファイルの中身を表示するプログラム。\n");
    printf("ファイル名を入力してください >>> ");
    scanf("%s",filename);

    fp = fopen(filename,"r");
    
    if (fp == NULL)
    {
        printf("ファイルは存在しません。\n");
    }
    
    do
    {
        output = fgetc(fp);
        putchar(output);
    } while (output != EOF);
    
    fclose(fp);

    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ cat example.txt
Hello
I am Chuah Hao Min
Niigata University 
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport7_2_t20b345b sreport7_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport7_2_t20b345b 
ファイル名を読み込んでファイルの中身を表示するプログラム。
ファイル名を入力してください >>> example.txt
Hello
I am Chuah Hao Min
Niigata University 
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
