/*
レポート課題2
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <string.h>
int discount(),i,j;
char telegram[100];

int main()
{      
    int pricechg;
    unsigned int len;
    unsigned int charge;

    printf("クリスマス割引です！文字列'Christmas'が含まれていると、-１０円！\n");
    printf("電文を入力してください>>>");
    fgets(telegram,100,stdin);

    len=strlen(telegram);
    pricechg=discount();//任意課題：料金が変わる機能の追加
    
    if (pricechg==1)//割引される機能
    {
        charge=(5*(len-1))-10;
        printf("あなたの電文の長さは%dです。\n",len-1);
        printf("文字列Christmasが入るので、-１０円！\n");
        printf("料金は%d円です。\n",charge);
    }
    else if (pricechg==0)//普通の値段設定（割引されない）
    {
        charge=5*(len-1);
        printf("あなたの電文の長さは%dです。\n",len-1);
        printf("料金は%d円です。\n",charge);
    }    

    return 0;
}

/*
任意課題：料金が変わる機能の追加
文字列'Christmas'が含まると、１０円を割引される
*/
int discount()
{
    char spwords[10]="Christmas";
    int count=0;

    for (i=0;i<strlen(telegram);i++)//配列の中で特定な文字列が含まる確認
    {
        for (j=0;j<strlen(spwords);j++)
        {
            if ((telegram[i+j]==spwords[j]))
            {
                count++;//文字が１つ含まると、記載する
            }
        }
    }
    
    if (count>=10)//文字が特定な文字列が超えると、特定な文字列が含まるということを確認した（割引される）
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai2_t20b345b kadai2_t20b345b.c
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai2_t20b345b 
クリスマス割引です！文字列'Christmas'が含まれていると、-１０円！
電文を入力してください>>>Merry Christmas!!
あなたの電文の長さは17です。
文字列Christmasが入るので、-１０円！
料金は75円です。
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
