/*
小レポート4(2)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
enum season{Spring=1,Summer,Fall,Winter};

enum season select(void)
{
    int input;
    do
    {
        printf("1:Spring\n2:Summer\n3.Fall\n4.Winter\n");
        printf("好きな季節を数字で入力してください >>> ");
        scanf("%d",&input);
        if (input < Spring || input > Winter)
        {
            printf("エラーです！１から４だけ入力してください！\n");
        }
    } while (input < Spring || input > Winter);

    return input;
}

int main(void)
{
    enum season choice;
    switch (choice = select())
    {
    case Spring:
        printf("Spring\n");
        break;

    case Summer:
        printf("Summer\n");
        break;
    
    case Fall:
        printf("Fall\n");
        break;

    case Winter:
        printf("Winter\n");
        break;
    
    default:
        break;
    }
    
    return 0;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport4_2_t20b345b sreport4_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport4_2_t20b345b 
1:Spring
2:Summer
3.Fall
4.Winter
好きな季節を数字で入力してください >>> 3
Fall
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
