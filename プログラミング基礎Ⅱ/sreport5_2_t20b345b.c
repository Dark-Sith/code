/*
小レポート5(2)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
void set_idx (int *v, int n);

int main(void)
{
    int i,num;
    printf("要素数を入力してください >>> ");
    scanf("%d",&num);
    int set[num];
    
    set_idx (set,num);
    for (i=0;i<num;i++)
    {
        printf("set[%d]:%d\n",i,set[i]);
    }

    return 0;
}

void set_idx (int *v, int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        v[i]=i;
    }
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport5_2_t20b345b sreport5_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport5_2_t20b345b 
要素数を入力してください >>> 15
set[0]:0
set[1]:1
set[2]:2
set[3]:3
set[4]:4
set[5]:5
set[6]:6
set[7]:7
set[8]:8
set[9]:9
set[10]:10
set[11]:11
set[12]:12
set[13]:13
set[14]:14
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
