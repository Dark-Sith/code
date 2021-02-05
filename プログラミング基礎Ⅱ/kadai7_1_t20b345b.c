/*
第3回レポート課題1
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <math.h>
#define sqr(x) ((x)*(x))
typedef struct 
{
    double real, img;
}complex;
typedef enum {Orth, Polar} form;
complex comp_scan (void);
complex comp_neg (complex u);//複素数uの符号を反転して返す関数
complex comp_conj (complex u);//複素数uの共役複素数を返す関数
complex comp_add (complex u, complex v);//複素数uとvの足を返す関数
complex comp_sub (complex u, complex v);//複素数uとvの差を返す関数
complex comp_mul (complex u, complex v);//複素数uとvの積を返す関数
complex comp_div (complex u, complex v);//複素数uとvの商を返す関数
double comp_abs (complex u);//複素数uの絶対値を返す関数
double comp_args (complex u);//複素数uの偏角を返す関数
void comp_print (complex z, form f);

int main(void)
{
    complex u, v;

    printf("２つの複素数(u,v)を入力してください。\n");
    printf("u = \n");
    u = comp_scan();
    printf("v = \n");
    v = comp_scan();

    printf("\n入力結果を示します。\n");
    printf("u = ");
    comp_print(u, Orth);
    printf("  = ");
    comp_print(u, Polar);
    printf("v = ");
    comp_print(v, Orth);
    printf("  = ");
    comp_print(v, Polar);

    printf("\n演算結果を示します。\n");
    printf("-u = ");
    comp_print(comp_neg(u), Orth);
    printf("   =  ");
    comp_print(comp_neg(u), Polar);
    printf("u* = ");
    comp_print(comp_conj(u), Orth);
    printf("   =  ");
    comp_print(comp_conj(u), Polar);
    printf("u + v = ");
    comp_print(comp_add(u,v), Orth);
    printf("      = ");
    comp_print(comp_add(u,v), Polar);
    printf("u - v = ");
    comp_print(comp_sub(u,v), Orth);
    printf("      = ");
    comp_print(comp_sub(u,v), Polar);
    printf("u * v = ");
    comp_print(comp_mul(u,v), Orth);
    printf("      = ");
    comp_print(comp_mul(u,v), Polar);
    printf("u / v = ");
    comp_print(comp_div(u,v), Orth);
    printf("      = ");
    comp_print(comp_div(u,v), Polar);

    return 0;
}

complex comp_scan (void)
{
    complex input;
    
    printf("Re: ");
    scanf("%lf",&input.real);
    printf("Im: ");
    scanf("%lf",&input.img);

    return (input);
}

complex comp_neg (complex u)
{
    complex w;
    w.real = -u.real;
    w.img = -u.img;

    return (w);
}

complex comp_conj (complex u)
{
    complex w;
    w.real = u.real;
    w.img = -u.img;

    return (w);
}

complex comp_add (complex u, complex v)
{
    complex w;
    w.real = u.real + v.real;
    w.img = u.img + v.img;

    return (w);
}

complex comp_sub (complex u, complex v)
{
    complex w;
    w.real = u.real - v.real;
    w.img = u.real - v.real;

    return (w);
}

complex comp_mul (complex u, complex v)
{
    complex w;
    w.real = u.real * v.real - u.img * v.img;
    w.img = u.real * v.img + v.real * u.img;

    return (w);
}

complex comp_div (complex u, complex v)
{
    complex w;
    w.real = (u.real * v.real + u.img * v.img)/(sqr(v.real) + sqr(v.img));
    w.img = (v.real * u.img - u.real * v.img)/(sqr(v.real) + sqr(v.img));

    return (w);
}

double comp_abs (complex u)
{
    return (sqrt((sqr(u.real)) + (sqr(u.img))));
}

double comp_args (complex u)
{
    return (atan2(u.img, u.real));
}

void comp_print (complex z, form f)
{
    switch (f)
    {
    case Orth:
        printf("%f+%fi\n",z.real,z.img);
        break;
    
    case Polar:
        printf("%fexp(%fi)\n",comp_abs(z),comp_args(z));
        break;
    }
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -lm -o  kadai7_1_t20b345b kadai7_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai7_1_t20b345b 
２つの複素数(u,v)を入力してください。
u = 
Re: 1.23
Im: -6.2
v = 
Re: 4
Im: 5

入力結果を示します。
u = 1.230000+-6.200000i
  = 6.320831exp(-1.374952i)
v = 4.000000+5.000000i
  = 6.403124exp(0.896055i)

演算結果を示します。
-u = -1.230000+6.200000i
   =  6.320831exp(1.766641i)
u* = 1.230000+6.200000i
   =  6.320831exp(1.374952i)
u + v = 5.230000+-1.200000i
      = 5.365902exp(-0.225542i)
u - v = -2.770000+-2.770000i
      = 3.917372exp(-2.356194i)
u * v = 35.920000+-18.650000i
      = 40.473064exp(-0.478897i)
u / v = -0.636098+-0.754878i
      = 0.987148exp(-2.271007i)
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
