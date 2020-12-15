/*
小レポート４（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("学生の得点を入力してください：");
    scanf("%d",&num);
    if (num>=90)
    {
        printf("評価はSです\n");
    }
    if (num>=80 && num<90)
    {
        printf("評価はAです\n");
    }
    if (num>=70 && num<80)
    {
        printf("評価はBです\n");
    }
    if (num>=60 && num<70)
    {
        printf("評価はCです\n");
    } 
    if (num<60)
    {
        printf("不合格です\n");
    }
    
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o sreport4_1_t20b345b sreport4_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./sreport4_1_t20b345b 
学生の得点を入力してください：89
評価はAです
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
