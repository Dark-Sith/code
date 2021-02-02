/*
小レポート7(1)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#define MAX 100

int main(void)
{
    FILE *fp;
    char filename[MAX];

    printf("ファイルの中身を消去するプログラム\n");
    printf("ファイル名を入力してください >>> ");
    scanf("%s",filename);

    fp = fopen(filename,"w");
    printf("ファイルの中身が消去された。\n");
    
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ cat example.txt
12312313123123
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport7_1_t20b345b sreport7_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport7_1_t20b345b 
ファイルの中身を消去するプログラム
ファイル名を入力してください >>> example.txt
ファイルの中身が消去された。
chuahhm@chuahhm-PC:~/Documents/pro2$ cat example.txt
chuahhm@chuahhm-PC:~/Documents/pro2$   
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
