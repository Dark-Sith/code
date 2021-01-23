/*
小レポート5(3)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
void str_copy (char *dst, char *src);

int main(void)
{
    char src[999],dst[999];
    printf("文字列を入力してください:");
    scanf("%s",&src);

    str_copy(dst,src);
    printf("コピーした文字列は%s\n",dst);

    return 0;
}

void str_copy (char *dst, char *src)
{
    while(*dst++ = *src++);
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport5_3_t20b345b sreport5_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport5_3_t20b345b 
文字列を入力してください:programming
コピーした文字列はprogramming
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
