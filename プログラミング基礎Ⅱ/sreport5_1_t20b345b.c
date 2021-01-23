/*
小レポート5(1)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
void adjust_point(int *n);

int main(void)
{
    int n; 
    printf("数字を入れてください：");
    scanf("%d",&n);

    adjust_point(&n);
    printf("更新した値：%d\n",n);

    return 0;
}

void adjust_point (int *n)
{
    if (*n < 0)
    {
        *n = 0;
    }
    else if (*n > 100)
    {
        *n = 100;
    }
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport5_1_t20b345b sreport5_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport5_1_t20b345b 
数字を入れてください：-823
更新した値：0
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport5_1_t20b345b 
数字を入れてください：23
更新した値：23
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport5_1_t20b345b 
数字を入れてください：198
更新した値：100
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
