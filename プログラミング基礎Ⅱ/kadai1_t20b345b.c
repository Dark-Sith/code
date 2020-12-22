/*
レポート課題１
T20B345B CHUAH HAO MIN
*/
#include <stdio.h> 
#include <stdlib.h>

char input[3][3];
void board(); 
void reset();
void getplayermove();//任意課題：入力のミスを抑止する機能も含める
void playercheck();
int checkres();//任意課題：勝敗を判定する機能
int player=1;
int move=0;

int main()
{    
    int res,max;
    max=9;
    printf("3×3のO・Xゲーム\n");
    printf("プレーヤー１（O）ーーープレーヤー２（X）\n");
    reset();
    
    do
    {
        board();
        getplayermove();  
        res = checkres();
        if (res!=-1)//ゲームの終わりの確認
        {
            break;
        }
        move++;
        player=(player%2);
        playercheck();
    } while ((res=-1)&&(move<max));

    board();
    if (res==1)
    {
        player--;

        printf("プレーヤー%dの勝利です！\n",player);
    }
    else 
    {
        printf("タイです！\n");
    }

    return 0;
}

void reset()//新しいボード
{
    int i,j;

    for (i=0;i<3;i++)   
    {
        for (j=0;j<3;j++)
        {
            input[i][j]=' ';
        }
    }  
}

void getplayermove()//プレーヤーの選択を取る
{
    int row,col;
    char syb;
    
    printf("プレーヤー%d、選んだ行の数値を入力してください\n",player);
    scanf("%d",&row);
    printf("プレーヤー%d、選んだ列の数値を入力してください\n",player);
    scanf("%d",&col);
    row--; col--;

    if (player==1)
    {
        syb='O';
    }
    else
    {
        syb='X';
    }

    if (input[row][col]!=' ')//任意課題：入力のミスを抑止する機能
    {
        printf("すでにO・Xの入った/入力値は１から３以外ので、他のところを選んでください！\n");
        player--;move--;
    }
    else
    {
        input[row][col]=syb;
    }
    player++;   
    void playercheck();
}

int checkres()//任意課題:勝敗の確認
{
    int i,j,count;
    count=0;
    for (i=0;i<3;i++)
    {
        if ((input[i][0]!=' ')&&(input[i][0]==input[i][1])&&(input[i][0]==input[i][2]))
        {
            return 1;
        }
    }

    for (i=0;i<3;i++)
    {
        if ((input[0][i]!=' ')&&(input[0][i]==input[1][i])&&(input[0][i]==input[2][i]))
        {
            return 1;
        }
    }

    if (((input[0][0]!=' ')&&input[0][0]==input[1][1])&&(input[1][1]==input[2][2]))
    {
        return 1;
    }
    
    if ((input[2][0]!=' ')&&(input[2][0]==input[1][1])&&(input[1][1]==input[0][2]))
    {
        return 1;
    }
 
    return -1;
}

void playercheck()//プレーヤーの番号のチェック
{
    player=(player%2);
    if (player==0)
    {
        player=2;
    }
    else
    {
        player=1;
    }
}

void board()//ボードの印刷
{
    int i;
    for(i=0;i<3;i++) {
        printf(" %c | %c | %c ",input[i][0],input[i][1], input[i][2]);
        if(i!=2) 
        {
            printf("\n---|---|---\n");
        }
    }
    printf("\n");
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai1_t20b345b kadai1_t20b345b.c
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai1_t20b345b 
3×3のO・Xゲーム
プレーヤー１（O）ーーープレーヤー２（X）
   |   |   
---|---|---
   |   |   
---|---|---
   |   |   
プレーヤー1、選んだ行の数値を入力してください
1
プレーヤー1、選んだ列の数値を入力してください
2
   | O |   
---|---|---
   |   |   
---|---|---
   |   |   
プレーヤー2、選んだ行の数値を入力してください
1
プレーヤー2、選んだ列の数値を入力してください
2
すでにO・Xの入った/入力値は１から３以外ので、他のところを選んでください！(任意課題)
   | O |   
---|---|---
   |   |   
---|---|---
   |   |   
プレーヤー2、選んだ行の数値を入力してください
3
プレーヤー2、選んだ列の数値を入力してください
3
   | O |   
---|---|---
   |   |   
---|---|---
   |   | X 
プレーヤー1、選んだ行の数値を入力してください
2
プレーヤー1、選んだ列の数値を入力してください
2
   | O |   
---|---|---
   | O |   
---|---|---
   |   | X 
プレーヤー2、選んだ行の数値を入力してください
2
プレーヤー2、選んだ列の数値を入力してください
1
   | O |   
---|---|---
 X | O |   
---|---|---
   |   | X 
プレーヤー1、選んだ行の数値を入力してください
3
プレーヤー1、選んだ列の数値を入力してください
2
   | O |   
---|---|---
 X | O |   
---|---|---
   | O | X 
プレーヤー1の勝利です！(任意課題)
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
