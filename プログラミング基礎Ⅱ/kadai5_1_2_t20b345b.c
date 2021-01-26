/*
第２回レポート課題１(2)
再帰的アルゴリズムを用いない場合
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
int finobacci (int n);

int main(void)
{
    int n, res;
    printf("フィボナッチ数列を求めるプログラム。\n");
    printf("nの数値を入力してください >>> ");
    scanf("%d",&n);
    res = finobacci(n);
    printf("n:%d\n",n);
    printf("答えは%d\n",res);
}

int finobacci (int n)
{
    int f[n+1];//フィボナッチ数列が入る
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i=2;i<=n;i++)
    {
        f[i] = f[i-1]+f[i-2];
    }
        
    return f[n];
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai5_1_t20b345b kadai5_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai5_1_t20b345b 
フィボナッチ数列を求めるプログラム。
nの数値を入力してください >>> 10
n:10
答えは55
chuahhm@chuahhm-PC:~/Documents/pro2$ 
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
再帰的アルゴリズムを用いる場合に比べて、用いない場合には計算が繰り返さないで、最新まで計算したのは事前に箱に入り、計算量が大幅に減少する。
*/
