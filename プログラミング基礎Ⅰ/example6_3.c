/*
例題６（３）
do while文を用いたプログラム(見張り方式)
*/
#include <stdio.h> 

int main(void)
{
    int num,sum;
    sum=0;
    do
    {
        printf("数値？");
        scanf("%d",&num);
        sum+=num; //sum=sum+num
    } while (num!=0);
    printf("合計＝%d\n",sum);
    
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o example6_2 example6_2.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./example6_2 
数値？1
数値？2
数値？3
数値？4
数値？5
数値？6
数値？7
数値？8
数値？9
数値？0
合計＝45
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/