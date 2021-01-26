/*
小レポート6(1)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 

struct xyz
{
    int x; long y;double z;
}input;

struct xyz scan_xyz(void){
    printf("int型の数値を入力してください >>> ");
    scanf("%d",&input.x);
    printf("long型の数値を入力してください >>> ");
    scanf("%ld",&input.y);
    printf("double型の数値を入力してください >>> ");
    scanf("%lf",&input.z);

    return input;
}

int main(void)
{
    struct xyz res;
    res = scan_xyz();

    printf("int型の数値:%d\n",res.x);
    printf("int型の数値:%ld\n",res.y);
    printf("int型の数値:%f\n",res.z);

    return 0;
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
