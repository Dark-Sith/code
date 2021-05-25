#include <stdio.h>
#define LIMIT 69//52!最大の位数
void initialize_array(int limit);//初期化
void division();
void print(int display);
int num[LIMIT];
int digit;//桁
int highest;//num[fac]の最高位の桁
int fac; //階乗
int carry;//桁上がり


int main(void)
{
    initialize_array(LIMIT);
    num[1] = 1; highest = 1;//初期化

    for ( fac = 1; fac <= 52; fac++)//1!～52!の計算
    {        
        division();
        print(highest);
    }
    return 0;
}

void initialize_array(int limit)
{
    int i;

    for ( i = 0; i < limit; ++i)
    {
        num[i] = 0;//初期化
    }
}

void division()
{
    carry = 0;//最下位桁に対する桁上がりはない
    for ( digit = 1; digit <= highest+1; digit++)
    {
        num[digit] = num[digit] * fac + carry;//fac倍し、下位の桁からの桁上がりを加える
        carry = num[digit]/10;// 上位桁への桁上がりを控える

        if (carry != 0)
        {
            num[digit] %= 10;//その桁の数が決まる
            if ((digit+1) > highest)
            {
                highest++;//前の階乗の最高位を超える場合
            }
        }
    }
}

void print(int display)
{
    int max_width;//右揃えるために必要なスペース
    int i;
    max_width = LIMIT - display;

    for ( i = 0; i < max_width; i++)//計算結果の一の位、十の位、...を揃える(右揃え)
    {
        printf(" ");
    }
    
    while (display > 0)
    {
        printf("%d", num[display--]);//位数から表示する
    }
    putchar('\n');
}