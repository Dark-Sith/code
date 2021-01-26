/*
第２回レポート課題2
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#define NUMBER 10
void descending_sort (double *data, int n);
void swap (double *x, double *y);

int main(void)
{
    double input[NUMBER];
    int i;
    printf("学籍番号：T20B345B\n");
    printf("0:交換ソート(bubble sort)プログラム。\n");
    printf("10個の実数を入力して下さい。\n");
    for (i=0;i<NUMBER;i++)
    {
        printf("data[%d]:",i);
        scanf("%lf",&input[i]);
    }
    
    descending_sort(input,NUMBER);
    printf("降順にソートしました。\n");
    for (i=0;i<NUMBER;i++)
    {
        printf("data[%d]:%f\n",i,input[i]);
    }

    return 0;
}

void descending_sort (double *data, int n)
{
    int i,j;        
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {    
            if (*(data+i)<*(data+j))
            {
                swap(data+i,data+j);//交換ソート
            }
        }
    }
}

void swap (double *x, double *y)//交換ソート
{
    double temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai4_2_t20b345b kadai4_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai4_2_t20b345b 
学籍番号：T20B345B
0:交換ソート(bubble sort)プログラム。
10個の実数を入力して下さい。
data[0]:10.8
data[1]:99
data[2]:128.78
data[3]:65.9
data[4]:180
data[5]:4.6
data[6]:88.56
data[7]:75.4
data[8]:32
data[9]:23.84
降順にソートしました。
data[0]:180.000000
data[1]:128.780000
data[2]:99.000000
data[3]:88.560000
data[4]:75.400000
data[5]:65.900000
data[6]:32.000000
data[7]:23.840000
data[8]:10.800000
data[9]:4.600000
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
