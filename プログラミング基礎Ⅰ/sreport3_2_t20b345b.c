/*
小レポート３（２）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    printf("2つの整数値に対する和・差・積・商・剰余を求めるプログラム\n");
    printf("整数値 a を入力して下さい:\n");
    scanf("%d",&a);
    printf("整数値 b を入力して下さい:\n");
    scanf("%d",&b);
    printf("a + b = %d\n",a + b);
    printf("a - b = %d\n",a - b);
    printf("a * b = %d\n",a * b);
    printf("a / b = %d\n",a / b);
    printf("a %% b = %d\n",a % b);
    printf("a の符号を反転した値は%d です\n",-a);

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o sreport3_2_t20b345b sreport3_2_t20b345b.c 
2つの整数値に対する和・差・積・商・剰余を求めるプログラム
整数値 a を入力して下さい:
57
整数値 b を入力して下さい:
21
a + b = 78
a - b = 36
a * b = 1197
a / b = 2
a % b = 15
a の符号を反転した値は-57 です
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
