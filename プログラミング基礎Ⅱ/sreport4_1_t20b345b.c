/*
小レポート4(1)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#define sub(a,b) ((a)-(b))

int main(void)
{
    int x,y;
    printf("二つの値xとyの差を求めるプログラム。\n");
    printf("xの値を入力してください >>> ");
    scanf("%d",&x);
    printf("yの値を入力してください >>> ");
    scanf("%d",&y);
    printf("二つの値xとyの差 = %d\n",sub(x,y));

    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport4_1_t20b345b sreport4_1_t20b345b.c
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport4_1_t20b345b 
二つの値xとyの差を求めるプログラム。
xの値を入力してください >>> 43
yの値を入力してください >>> 23
二つの値xとyの差 = 20
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
