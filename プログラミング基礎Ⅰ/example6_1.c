/*
例題６（１）
while文を用いたプログラム
*/
#include <stdio.h> 

int main(void)
{
    int counter=1;
    while (counter<=10)
    {
        printf("%d\n",counter);
        counter++; //counter=counter+1
    }
    
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o example6_1 example6_1.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./example6_1 
1
2
3
4
5
6
7
8
9
10
chuahhm@chuahhm-PC:~/Documents/pro1$
2.考察もしくはコメント
丸め誤差を確認することができた。
*/