/*
レポート課題７（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#define MAX 19

int main(void)
{
    int input[MAX],i,j,n,temp;
    printf("数の個数を入力してください：");
    do
    {
        scanf("%d",&n);
        if ((n<2)||(n>MAX)||(n/2==0))
        {
            printf("奇数個の整数と19までの値を入力してください：");
        }        
    } while ((n<2)||(n>MAX)||(n/2==0));    
    
    for (i=0;i<n;i++)
    {
        printf("数を入力してください：");
        scanf("%d",&input[i]);
        for (j=i-1;j>=0;j--)
        {
            if (input[j]==input[i])//同じ値を含まないようにため
            {
                printf("同じ値を含まないでください！もう一回直してください：");
                scanf("%d",&input[i]);
            }      
        }   
    }

    for (i=0;i<n;i++)//並べ替え
    {
        for (j=i+1;j<n;j++)
        {
           if (input[i]>input[j])
           {
               temp=input[i];
               input[i]=input[j];
               input[j]=temp;
           }           
        }
    }
    
    for (i=0;i<n;i++)
    {
        if (i==((n+1)/2)-1)
        {
            printf("%d*",input[i]);
        } 
        else
        {
            printf("%d",input[i]);
        }
        printf("\n");
    }

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai7_1_t20b345b kadai7_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai7_1_t20b345b 
数の個数を入力してください：22
奇数個の整数と19までの値を入力してください：5
数を入力してください：1
数を入力してください：1
同じ値を含まないでください！もう一回直してください：3
数を入力してください：7
数を入力してください：6
数を入力してください：5
1
3
5*
6
7
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
