/*
レポート課題４（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h>

int main(void)
{
    double a, b, c, root1, root2, realnum, imgnum, D = 0;
    printf("2 次方程式 ax^2 + bx + c = 0 の解を出力するプログラム\n");
    printf("整数値 a を入力して下さい:");
    scanf("%lf",&a);
    if (a == 0)
    {
        printf("整数値 a は a ≠ 0 ように入力してください");
        scanf("%lf",&a);
    }    
    printf("整数値 b を入力して下さい:");
    scanf("%lf",&b);
    printf("整数値 c を入力して下さい:");
    scanf("%lf",&c);

    D = b*b-4*a*c;
    if (D>0)
    {
        root1 = (-b+sqrt(D))/(2*a);
        root2 = (-b-sqrt(D))/(2*a);
        printf("2 次方程式の解は%.2fと%.2f\n",root1,root2);
    }
    else if (D==0)
    {
        root1 = root2 = -b/(2*a);
        printf("2 次方程式の解は%.2f\n",root1);
    }
    else
    {
        realnum = -b/(2*a);
        imgnum =  sqrt(-D)/(2*a);
        printf("2 次方程式の解は%.2f+%.2fi と %.2f-%.2fi\n",realnum, imgnum, realnum, imgnum);
    }        
    
    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai4_1_t20b345b kadai4_1_t20b345b.c -lm 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai4_1_t20b345b
2 次方程式 ax^2 + bx + c = 0 の解を出力するプログラム
整数値 a を入力して下さい:1
整数値 b を入力して下さい:5
整数値 c を入力して下さい:20
2 次方程式の解は-2.50+3.71i と -2.50-3.71i
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
