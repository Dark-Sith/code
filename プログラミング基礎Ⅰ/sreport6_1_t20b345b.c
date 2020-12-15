/*
小レポート６（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 

int main(void)
{
    int count=0;
    while (count<30)
    {
        if (((count%10==3)||(count%3==0))&&(count!=0))
        {
            printf("%d アタリ\n",count);
            count++;
            continue;
        }
        printf("%d\n",count);
        count++;
    } 

    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o sreport6_1_t20b345b sreport6_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./sreport6_1_t20b345b 
0
1
2
3 アタリ
4
5
6 アタリ
7
8
9 アタリ
10
11
12 アタリ
13 アタリ
14
15 アタリ
16
17
18 アタリ
19
20
21 アタリ
22
23 アタリ
24 アタリ
25
26
27 アタリ
28
29
2.考察もしくはコメント
丸め誤差を確認することができた。
*/