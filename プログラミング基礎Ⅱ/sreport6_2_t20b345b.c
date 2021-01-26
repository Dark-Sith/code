/*
小レポート6(2)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
typedef struct
{
    double re; double im;
}complex;
void comp_print(complex v);
complex comp_add(complex u, complex v);

int main(void)
{
    complex u, v, res;
    printf("複素数の和を求めるプログラム。\n");
    printf("一番目の実数を入力してください >>> ");
    scanf("%lf",&u.re);
    printf("一番目の虚数を入力してください >>> ");
    scanf("%lf",&u.im);
    printf("二番目の実数を入力してください >>> ");
    scanf("%lf",&v.re);
    printf("二番目の虚数を入力してください >>> ");
    scanf("%lf",&v.im);

    v = comp_add(u,v);
    comp_print(v);

    return 0;
}

complex comp_add(complex u, complex v)
{
    complex res;
    res.re = u.re + v.re;
    res.im = u.im + v.im;

    return (res);
}

void comp_print(complex v)
{
    printf("答えは%.2lf+%.2lfi\n",v.re,v.im);
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport6_2_t20b345b sreport6_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport6_2_t20b345b 
複素数の和を求めるプログラム。
一番目の実数を入力してください >>> 45
一番目の虚数を入力してください >>> 23 
二番目の実数を入力してください >>> 3.2
二番目の虚数を入力してください >>> 5.7
答えは48.20+28.70i
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
