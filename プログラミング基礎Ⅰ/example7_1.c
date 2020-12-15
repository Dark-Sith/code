/*
例題７（１）
配列により3つの平均値を実数で表示する
*/
#include <stdio.h> 

int main(void)
{
    int input[3];
    double avg=0;
    printf("３つの整数を入力してください：\n");
    scanf("%d %d %d",&input[0],&input[1],&input[2]);
    avg=(double)(input[0]+input[1]+input[2])/3;
    printf("平均値は%.2f\n",avg);
    
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o example7_1 example7_1.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./example7_1 
３つの整数を入力してください：
3
5
6
平均値は4.67
2.考察もしくはコメント
丸め誤差を確認することができた。
*/