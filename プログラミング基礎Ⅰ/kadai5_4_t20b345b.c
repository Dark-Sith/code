/*
レポート課題５（４）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 

int main(void)
{
    int i,j,sum;
    for (i=1; i<=1000;i++)
    {
        sum = 0;
        for (j=1;j<i; j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
            
        }
        if (sum==i)
        {
            printf("%d ",i);
        }                
    }
    printf("\n");

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai5_4_t20b345b kadai5_4_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai5_4_t20b345b 
6 28 496 
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/