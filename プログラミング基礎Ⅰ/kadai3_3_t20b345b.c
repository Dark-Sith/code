/*
レポート課題３（３）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 

int main(void)
{
    int a, b = 0;
    double c = 0;
    printf("2つの正の整数同士の割り算で,求める商を整数値で,小数点以下を四捨五入した結果を出力するプログラム\n");
    printf("整数値 a を入力して下さい:");
    scanf("%d",&a);
    printf("整数値 b を入力して下さい:");
    scanf("%d",&b);
    c = ((double)(a)/(double)b)+0.5;
    printf("(四捨五入した結果)\na/b=%d\n",(int)c);
    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai3_3_t20b345b kadai3_3_t20b345b.c
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai3_3_t20b345b 
2つの正の整数同士の割り算で,求める商を整数値で,小数点以下を四捨五入した結果を出力するプログラム
整数値 a を入力して下さい:98
整数値 b を入力して下さい:20
(四捨五入した結果)
a/b=5
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
