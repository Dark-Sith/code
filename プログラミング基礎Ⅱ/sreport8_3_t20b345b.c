/*
小レポート8(3)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <string.h>

int main(void)
{
    FILE *fp, *fp2;
    char filename[1024];

    printf("コピー元ファイル名：");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    
    if (fp == NULL)
    {
        printf("ファイルは存在しません。\n");
    }

    printf("コピー先ファイル名：");
    scanf("%s",filename);
    fp2 = fopen(filename,"w");

    size_t readcount = fread(filename,sizeof(char),sizeof(filename),fp);
    fwrite(filename,sizeof(char),readcount,fp2);

    fclose(fp); fclose(fp2);

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ cat example.txt 
chuahhm@chuahhm-PC:~/Documents/pro2$ cat example.txt
Hello, I am Chuah Hao Min
I am from Niigata University
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport8_3_t20b345b sreport8_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport8_3_t20b345b 
コピー元ファイル名：example.txt
コピー先ファイル名：output.txt
chuahhm@chuahhm-PC:~/Documents/pro2$ cat output.txt 
Hello, I am Chuah Hao Min
I am from Niigata University
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
