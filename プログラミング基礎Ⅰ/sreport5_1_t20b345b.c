/*
小レポート５（１）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>

int main(void)
{
    int i,j;
    printf("9x9|");
    for(i=1;i<=9;i++){      
        printf("%3d",i); //最も上の列を表示する
    }
    printf("\n");
    printf("---|");
    for(i=1;i<=9;i++){      
        printf("---"); //横線を表示する
    }
    printf("\n");

    for(i=1;i<=9;i++){
        printf("%3d|",i); //左側の行を表示する
        for (j=1;j<=9;j++){        
            printf("%3d",i*j);
        } 
        printf("\n");  
    }

    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o sreport5_1_t20b345b sreport5_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$./sreport5_1_t20b345bc 
9x9|  1  2  3  4  5  6  7  8  9
---|---------------------------
  1|  1  2  3  4  5  6  7  8  9
  2|  2  4  6  8 10 12 14 16 18
  3|  3  6  9 12 15 18 21 24 27
  4|  4  8 12 16 20 24 28 32 36
  5|  5 10 15 20 25 30 35 40 45
  6|  6 12 18 24 30 36 42 48 54
  7|  7 14 21 28 35 42 49 56 63
  8|  8 16 24 32 40 48 56 64 72
  9|  9 18 27 36 45 54 63 72 81
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
