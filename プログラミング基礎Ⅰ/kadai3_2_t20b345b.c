/*
レポート課題３（２）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>

int main(void)
{
    double far = 0;
    printf("摂氏温度(C)に変換して出力するプログラム\n");
    printf("華氏温度(F)で気温(実数)を入れてください：");             
    scanf("%lf",&far);  
    double cel = (far-32)*5/9;
    printf("摂氏温度(C)で気温=%0.1f\n",cel);
    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai3_2_t20b345b kadai3_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai3_2_t20b345b 
摂氏温度(C)に変換して出力するプログラム
華氏温度(F)で気温(実数)を入れてください：55
摂氏温度(C)で気温=12.8
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
