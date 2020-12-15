/*
小レポート３（１）
T20B345B CHUAH HAO MIN
*/
#include<stdio.h>

int main(void)
{
  int a = 57;
  double b = 21.9;
  int c = 0;
  double d = 12.123;

  printf("a+b=%f\n",a+b);
  printf("a*b=%f\n",a*b);

  printf("a+b=%d\n",a+b);
  printf("a*b=%d\n",a*b);

  c=d;
  printf("c=%d\n",c);   
  c=10;
  d=c;
  printf("d=%f\n",d);

  d=12.123;
  printf("d=%d\n",(int)d);

  c=(int)b+(int)d;
  printf("c=%d\n",c);

  c=(int)(b+d);
  printf("c=%d\n",c);  

  a=1;
  c=3;
  b=a/c;
  printf("b=%f\n",b);
  b=(double)a/(double)c;
  printf("b=%f\n",b);

  return 0;
}

/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro1$ gcc -o sreport3_1_t20b345b sreport3_1_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro1$./sreport3_1_t20b345bc 
a+b=78.900000
a*b=1248.300000
a+b=24691296
a*b=24691296
c=12
d=10.000000
d=12
c=33
c=34
b=0.000000
b=0.333333
chuahhm@chuahhm-PC:~/Documents/pro1$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
