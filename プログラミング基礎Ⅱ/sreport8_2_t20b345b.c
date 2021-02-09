/*
小レポート8(2)
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
void decrement_date (int *y, int *m, int *d);
void increment_date (int *y, int *m, int *d);
int leapyear (int y);

int main(void)
{
    int y, m ,d;
    int yy, ym, yd;
    int ty, tm, td;
    printf("日付を入力してください:\n");
    printf("年："); scanf("%d",&y);
    printf("月："); scanf("%d",&m);
    printf("日："); scanf("%d",&d);

    yy = ty = y; ym = tm = m; yd = td = d;

    printf("今日　>>> %d年%d月%d日\n", y, m, d);

    decrement_date(&yy, &ym, &yd);
    printf("前の日 >>> %d年%d月%d日\n", yy, ym, yd);

    increment_date(&ty, &tm, &td);
    printf("次の日 >>> %d年%d月%d日\n", ty, tm, td);

    return 0;
}

void decrement_date (int *y, int *m, int *d)
{
    int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, i;

    if (leapyear(*y) == 1)
    {
        day[1]++;
    }
    
    if (*d == 1)
    {
        *d = day[(*m)-2];
        for ( i = 1; i < 13; i++)
        {
            if (*d != day[(i)])
            {
                *d = day[0];
            }
        }
        
        if (--(*m) <= 0)
        {
            *m = 12;
            (*y)--;
        }
    }
    else
    {
        (*d)--;
    }
}

void increment_date (int *y, int *m, int *d)
{
    int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (leapyear(*y) == 1)
    {
        day[1]++;
    }

    if (*d == day[(*m)-1])
    {
        *d = 1;
        if (++(*m) > 12)
        {
            *m = 1;
            (*y)++;
        }
    }
    else
    {
        (*d)++;
    }
}

int leapyear (int y)
{
    if ((((y % 400) == 0) && (((y % 10000) != 0) || ((y % 4000) != 0))) ||(((y % 100) == 0) && ((y % 400) == 0)) ||(((y % 4) == 0) && ((y % 100) != 0)))
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
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o sreport8_2_t20b345b sreport8_2_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport8_2_t20b345b 
日付を入力してください:
年：2020
月：1
日：1
今日　>>> 2020年1月1日
前の日 >>> 2019年12月31日
次の日 >>> 2020年1月2日
chuahhm@chuahhm-PC:~/Documents/pro2$ ./sreport8_2_t20b345b 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
