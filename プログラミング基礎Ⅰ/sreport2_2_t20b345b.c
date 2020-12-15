/*
t20b345b CHUAH HAO MIN
小レポート２（２）
*/
#include<stdio.h>

int main(void)
{
  printf("test1\n");printf("test2\n");printf("test3\n");

  return 0;
}

/*
答え：正しくない
実行結果により、「printf」関数を呼び出すと、常に新しい行の先頭から表示を開始することが必要ではありません。
理由は、\nもう改行の用途があって、セミコロンは文を区切りしたからです。
*/
