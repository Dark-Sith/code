/*
第２回レポート課題１
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
int finobacci (int n);

int main(void)
{
    int n,res;
    printf("フィボナッチ数列を求めるプログラム。\n");
    printf("nの数値を入力してください >>> ");
    scanf("%d",&n);

    res = finobacci(n);
    printf("n:%d\n",n);
    printf("答えは%d\n",res);

    return 0;
}

int finobacci (int n)
{
    if ((n==1)||(n==2))
    {
        return 1;
    }
    else
    {
        return (finobacci(n-1)+finobacci(n-2));
    }
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai4_1_t20b345b kadai4_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai4_1_t20b345b 
フィボナッチ数列を求めるプログラム。
nの数値を入力してください >>> 10
n:10
答えは55
chuahhm@chuahhm-PC:~/Documents/pro2$ 
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
