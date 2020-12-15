/*
レポート課題３（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>

int main(void)
{
    double rad = 0;
    double pi = 3.14159;
    printf("円周と面積を求めるプログラム\n");
    printf("半径(実数)の値を入れてください：");
    scanf("%lf",&rad);
    double cir = 2*pi*rad;
    double area = pi*(rad*rad);
    printf("円周=%0.2f\n",cir);
    printf("面積=%0.2f\n",area);
    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai3_1_t20b345b kadai3_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai3_1_t20b345b 
円周と面積を求めるプログラム
半径(実数)の値を入れてください：3
円周=18.85
面積=28.27
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
