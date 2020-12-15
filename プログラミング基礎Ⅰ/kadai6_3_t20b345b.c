/*
レポート課題6（3）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h>

int main(void)
{
    int x,y,a,b,t,gcd,lcm=0;
    printf("2つの数の最小公倍数を求めるプログラム");
    printf("２つの数を入力してください：\n");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;

    while (b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }   

    lcm=(x*y)/a;
    printf("2つの数の最小公倍数は%d",lcm);

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai6_3_t20b345b  kadai6_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai6_3_t20b345b 
掛け算プログラム
2つの正の整数を入力してください:
11
34
答えは374
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
