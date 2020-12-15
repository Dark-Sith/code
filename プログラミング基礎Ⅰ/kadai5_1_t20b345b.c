/*
レポート課題５（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h>

int main(void)
{
    int ind,i,j;
    printf("100 以下の素数を全て表示するプログラム\n");
    for (i=2;i<=100;i++){
        ind = 1;//素数の判断基準
        for (j=2;j<i;j++){
            if (i%j==0){
                ind = 0;
                break;
            }           
        }
        if (ind==1){
            printf("%d ",i);
        }        
    }
    printf("\n");

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai5_1_t20b345b kadai5_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai5_1_t20b345b 
100 以下の素数を全て表示するプログラム
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/