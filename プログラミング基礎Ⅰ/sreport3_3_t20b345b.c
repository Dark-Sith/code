/*
小レポート３（２）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("3つの整数値に対する平均値を求めるプログラム\n");
    printf("整数値 a を入力して下さい:");
    scanf("%d",&a);
    printf("整数値 b を入力して下さい:");
    scanf("%d",&b);
    printf("整数値 c を入力して下さい:");
    scanf("%d",&c);
    printf("平均値= %f\n",(double)(a+b+c)/3);

    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o sreport3_3_t20b345b sreport3_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./sreport3_3_t20b345b 
3つの整数値に対する平均値を求めるプログラム
整数値 a を入力して下さい:22
整数値 b を入力して下さい:33
整数値 c を入力して下さい:45
平均値= 33.333333
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/