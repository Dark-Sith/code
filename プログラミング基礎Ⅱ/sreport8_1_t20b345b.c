/*
小レポート8(1)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
int search_idx (const int v[], int idx[], int key, int n);

int main(void)
{
    int n, i, key, count;
    printf("要素数を入力してください　>>> ");
    scanf("%d",&n);
    int v[n], idx[n];

    printf("%dの要素を入力してください：\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
    }

    printf("keyを入力してください　>>> ");
    scanf("%d",&key); 

    count = search_idx(v, idx, key, n);

    for ( i = 0; i < count; i++)
    {
        printf("idx[%d] = %d\n",idx[i],key);
    }
    
    printf("keyと等しい全要素の添字: ");

    for ( i = 0; i < count; i++)
    {
        printf("%d, ",idx[i]);
    }
    printf("\n%dが%d個見つかりました。\n",key,count);
        
    return 0;
}

int search_idx (const int v[], int idx[], int key, int n)
{
    int i, count = 0;
    for ( i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            idx[count] = i;
            count++;
        }
    }
    
    return count;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport8_1_t20b345b sreport8_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport8_1_t20b345b 
要素数を入力してください　>>> 7
7の要素を入力してください：
v[0] = 1
v[1] = 7
v[2] = 5
v[3] = 7
v[4] = 2
v[5] = 4
v[6] = 7
keyを入力してください　>>> 7
idx[1] = 7
idx[3] = 7
idx[6] = 7
keyと等しい全要素の添字: 1, 3, 6, 
7が3個見つかりました。
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
