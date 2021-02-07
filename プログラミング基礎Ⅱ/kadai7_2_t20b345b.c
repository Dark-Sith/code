/*
第3回レポート課題2
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>
#include <ctype.h> 
#define MAX 63

int main(void)
{
    FILE *fp, *fp2;
    char filename[MAX], new[MAX], copy;

    printf("テキストファイルから読み取ったすべての英小文字を英大文字に変換しながら任意のファイルにコピーするプログラム。\n");
    printf("コピー元ファイル名：");
    scanf("%s",filename);

    fp = fopen(filename,"r");
    
    if (fp == NULL)
    {
        printf("ファイルは存在しません。\n");
    }

    printf("コピー先ファイル名：");
    scanf("%s",new);

    fp2 = fopen(new,"w");

    copy = fgetc(fp);
    while (copy != EOF)
    {
        fputc(toupper(copy),fp2);
        copy = fgetc(fp);
    }

    fclose(fp); fclose(fp2);

    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai7_2_t20b345b kadai7_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ cat hello.c 
#include <stdio.h>

int main (void)
{
    printf("Hello World!\n");

    return 0;
}
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai7_2_t20b345b 
テキストファイルから読み取ったすべての英小文字を英大文字に変換しながら任意のファイルにコピーするプログラム。
コピー元ファイル名：hello.c
コピー先ファイル名：output.txt
chuahhm@chuahhm-PC:~/Documents/pro2$ cat output.txt 
#INCLUDE <STDIO.H>

INT MAIN (VOID)
{
    PRINTF("HELLO WORLD!\N");

    RETURN 0;
}
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
