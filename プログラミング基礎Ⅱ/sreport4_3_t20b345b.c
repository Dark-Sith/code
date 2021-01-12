/*
小レポート4(3)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
unsigned long combination (int n, int r);
int factorial (int n);
int factorialr (int r);

int main(void)
{
    int n,r;
    long ncr;
    printf("異なるn個から異なるr個を取り出す組み合わせの数nCrを求めるプログラム。\n");
    printf("nの数値を入力してください >>> ");
    scanf("%d",&n);
    printf("rの数値を入力してください >>> ");
    scanf("%d",&r);

    ncr = combination(n,r);
    printf("答えは%ld\n",ncr);

    return 0;
}

unsigned long combination (int n, int r)
{
    if ((n==0)||(n==r))
    {
        return 1;
    }
    else if (r==1)
    {
        return n;
    }
    else
    {
        return ((factorial(n-1)/(factorialr(r-1)*factorial(n-r)))+(factorial(n-1)/(factorialr(r)*factorial(n-r-1))));
    } 
}

int factorial (int n)
{
    if (n>0)
    {
        return (n*factorial(n-1));
    }
    else
    {
        return 1;
    }
}

int factorialr (int r)
{
    if (r>0)
    {
        return (r*factorialr(r-1));
    }
    else
    {
        return 1;
    }
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport4_3_t20b345b sreport4_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport4_3_t20b345b 
異なるn個から異なるr個を取り出す組み合わせの数nCrを求めるプログラム。
nの数値を入力してください >>> 10
rの数値を入力してください >>> 5
答えは252
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport4_3_t20b345b 
異なるn個から異なるr個を取り出す組み合わせの数nCrを求めるプログラム。
nの数値を入力してください >>> 10
rの数値を入力してください >>> 10
答えは1
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport4_3_t20b345b 
異なるn個から異なるr個を取り出す組み合わせの数nCrを求めるプログラム。
nの数値を入力してください >>> 10
rの数値を入力してください >>> 1
答えは10
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport4_3_t20b345b 
異なるn個から異なるr個を取り出す組み合わせの数nCrを求めるプログラム。
nの数値を入力してください >>> 0
rの数値を入力してください >>> 10
答えは1
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
