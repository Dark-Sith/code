/*
レポート課題５（３）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 

int main(void)
{
    int size,i,j;
    printf("短辺のサイズを入力下さい:");
    scanf("%d",&size);

    for (i=1;i<=size;i++)
    {
        for (j=i;j<size;j++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("*");
        } 
        printf("\n");             
    }   

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai5_3_t20b345b kadai5_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai5_3_t20b345b 
短辺のサイズを入力下さい:5
    *
   **
  ***
 ****
*****
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/