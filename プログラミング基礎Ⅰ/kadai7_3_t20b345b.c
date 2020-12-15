/*
レポート課題７（３）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#define MAX 19

int main(void)
{
    int input[MAX],final[MAX];
    int i,j,n,x,temp,count;
    printf("数の個数を入力してください：");
    do
    {
        scanf("%d",&n);
        if ((n<=2)||(n>MAX)||(n%2==0))
        {
            printf("奇数個の整数と３から19までの値を入力してください：");
        }        
    } while ((n<=2)||(n>MAX)||(n%2==0));    
    
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

    final[0]=input[0];//新しい行列に挿入する
    count=n-1;
    for (i=1;i<n;i++)//最大値を中心に上下に(ほぼ)均等な分布形状へ並び替える
    {
        if (i%2==0)//i=2,4...
        {
            final[i-(i/2)]=input[i];
        }
        else//i=1,3...
        {
            final[count]=input[i];
            count--;
        }        
    }

    for (i=0;i<n;i++)
    {
        for (x=0;x<final[i];x++)//空白を挿入
        {
            printf(" ");
        }
        if (i==((n+1)/2)-1)
        {
            printf("%d*",final[i]);
        } 
        else
        {
            printf("%d",final[i]);
        }
        printf("\n");
    }

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai7_3_t20b345b kadai7_3_t20b345b.c
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai7_3_t20b345b
数の個数を入力してください：6
奇数個の整数と３から19までの値を入力してください：4
奇数個の整数と３から19までの値を入力してください：7
数を入力してください：21
数を入力してください：33
数を入力してください：43
数を入力してください：22
数を入力してください：10
数を入力してください：24
数を入力してください：8
        8
                     21
                        24
                                           43*
                                 33
                      22
          10
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
