/*
例題７（２）
配列により3つの平均値を実数で表示する
*/
#include <stdio.h> 

int main(void)
{
    int i,input[3];
    double avg=0;
    for (i=0;i<3;i++)
    {
        printf("整数を入力してください：\n");
        scanf("%d",&input[i]);
        avg=avg+(double)(input[i]);
    }
    
    avg=avg/3;
    printf("平均値は%.2f\n",avg);
    
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o example7_2 example7_2.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./example7_2 
整数を入力してください：
4
整数を入力してください：
2
整数を入力してください：
8
平均値は4.67
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/