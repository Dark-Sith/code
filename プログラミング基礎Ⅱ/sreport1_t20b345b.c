/*
小レポート１
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h> 

int main(void)
{
    int i,j;
    double sum,avg,dev,sdev;
    int data[3][5]={{45,46,41,39,48},{45,39,52,40,45},{48,46,48,48,40},};
    double data2[3][2];
    double devtlb[3][5];

    //初期化
    printf("学年/組\t");
    for (i=1;i<=5;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for (i=0;i<3; i++)
    {
        printf("%d\t",i+1);
        for (j=0;j<5;j++)
        {
            printf("%d\t",data[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<3; i++)
    {
        sum=0;
        for (j=0;j<5;j++)
        {
            sum+=data[i][j];
        }
        avg=(double)sum/5;//平均値の計算
        data2[i][0]=avg;
    }

    //偏差
    printf("\n偏差\n");
    printf("学年/組\t");
    for (i=1;i<=5;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for (i=0;i<3; i++)
    {
        printf("%d\t",i+1);
        sdev=0;
        for (j=0;j<5;j++)
        {
            dev=(double)data[i][j]-data2[i][0];
            devtlb[i][j]=dev;
            printf("%.2f\t",devtlb[i][j]);
            sdev+=(devtlb[i][j])*(devtlb[i][j]);
        }
        data2[i][1]=sqrt(sdev/5);//標準偏差の計算
        printf("\n");
    }
    
    //平均値&標準偏差の表示
    printf("\n");
    printf("学年/組\t平均値\t標準偏差");
    printf("\n");
    for (i=0;i<3; i++)
    {
        printf("%d\t",i+1);
        printf("%.2f\t%.3f",data2[i][0],data2[i][1]);
        printf("\n");
    }
        
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport1_t20b345b sreport1_t20b345b.c -lm
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport1_t20b345b 
学年/組 1       2       3       4       5
1       45      46      41      39      48
2       45      39      52      40      45
3       48      46      48      48      40

偏差
学年/組 1       2       3       4       5
1       1.20    2.20    -2.80   -4.80   4.20
2       0.80    -5.20   7.80    -4.20   0.80
3       2.00    0.00    2.00    2.00    -6.00

学年/組 平均値  標準偏差
1       43.80   3.311
2       44.20   4.622
3       46.00   3.098
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
