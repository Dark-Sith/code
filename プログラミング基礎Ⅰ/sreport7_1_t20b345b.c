/*
小レポート７（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h> 
#define MAX 10

int main(void)
{
    int input[MAX],i;
    double avg,dev,sdev,sum=0;

    for (i=0;i<MAX;i++)
    {
        printf("データ%dを入力してください：",i+1);
        scanf("%d",&input[i]);
        sum+=(double)(input[i]);//総合
    }

    avg=sum/MAX;//平均値

    for (i=0;i<MAX;i++)
    {
        dev=(double)(input[i])-avg;//偏差
        sdev+=dev*dev;//sdev=sdev+dev*dev
        printf("データ%d：%d\n",i+1,input[i]);
        printf("データ%dの偏差：%.2f\n",i+1,dev);
    }
    
    sdev=sqrt(sdev/MAX);//標準偏差
    printf("--------------------\n");
    printf("標準偏差：%.3f\n",sdev);
    printf("平均値：%.2f\n",avg);

    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -lm  -o  sreport7_1_t20b345b sreport7_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./sreport7_1_t20b345b 
データ1を入力してください：5
データ2を入力してください：6
データ3を入力してください：10
データ4を入力してください：12
データ5を入力してください：16
データ6を入力してください：16
データ7を入力してください：21
データ8を入力してください：23
データ9を入力してください：23
データ10を入力してください：23
データ1：5
データ1の偏差：-10.50
データ2：6
データ2の偏差：-9.50
データ3：10
データ3の偏差：-5.50
データ4：12
データ4の偏差：-3.50
データ5：16
データ5の偏差：0.50
データ6：16
データ6の偏差：0.50
データ7：21
データ7の偏差：5.50
データ8：23
データ8の偏差：7.50
データ9：23
データ9の偏差：7.50
データ10：23
データ10の偏差：7.50
--------------------
標準偏差：6.652
平均値：15.50
chuahhm@chuahhm-PC:~/Documents/pro1$
2.考察もしくはコメント
丸め誤差を確認することができた。
*/