/*
レポート課題５（２）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h>

int main(void)
{
    int ind,i,j,k;
    printf("100 以下の素数で,3が含まれる素数を表示するプログラム\n");
    for (i=2;i<=100;i++){
        ind = 1;//素数の判断基準
        for (j=2;j<i;j++){
            if (i%j==0){
                ind = 0;
                break;
            }           
        }
        if (ind==1){
            if ((i%10==3)||(i==3)||(i/10%10==3)){
                printf("%d ",i);
            }
        }        
    }
    printf("\n");

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o  kadai5_2_t20b345b kadai5_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai5_2_t20b345b 
100 以下の素数で,3が含まれる素数を表示するプログラム
3 13 23 31 37 43 53 73 83 
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/