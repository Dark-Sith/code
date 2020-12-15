/*
レポート課題４（２）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 

int main(void)
{
    int num1, num2, num3, num4, max, min = 0;
    printf("4つの整数値を読み込んで,その最小値と最大値を求めるプログラム\n");
    printf("4つの整数値を入力してください：\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    max, min = num1;
    if (num2>max)
    {
        max = num2;
    }
    else if (num2<min){
        min = num2;
    }
    if (num3>max)
    {
        max = num3;
    }
    else if (num3<min){
        min = num3;
    }
    if (num4>max)
    {
        max = num4;
    }
    else if (num4<min){
        min = num4;
    }

    printf("最小値=%d,最大値=%d\n",min, max);
    
    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai4_2_t20b345b kadai4_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai4_2_t20b345b
4つの整数値を読み込んで,その最小値と最大値を求めるプログラム
4つの整数値を入力してください：
22
43
22
10
最小値=10,最大値=43
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
