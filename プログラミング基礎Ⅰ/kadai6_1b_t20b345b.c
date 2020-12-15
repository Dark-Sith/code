/*
レポート課題6（１b）
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h>

int main(void)
{
    int x,y,sum,i=0;
    printf("掛け算プログラム\n");
    printf("2つの正の整数を入力してください:\n");
    scanf("%d %d",&x,&y); 

    while (i<y)
    {
        sum+=x;
        i++;
    }
    
    printf("答えは%d\n",sum);

    return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o kadai6_1b_t20b345b kadai6_1b_t20b345b.c
chuahhm@chuahhm-PC:~/Documents/pro1$ ./kadai6_1b_t20b345b 
掛け算プログラム
2つの正の整数を入力してください:
56
67
答えは3752
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
カウンタ方式（for文）と見張り方式の行数（while文）がほぼ同じだと思う。しかし、ウーザーから入力を求めると、見張り方式の行数（while文）を使うのが適当だと思う。なぜなら、ウーザーからのい入力が未定ので、while文を使うと、理解しやすいと思うからである。
丸め誤差を確認することができた。
*/
