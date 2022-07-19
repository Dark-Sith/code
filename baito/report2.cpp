#include <string>
#include <iostream>
#include "report2.h"
using namespace std;
#define MAX 10 //最大10個データまで

void student::getInput(void)//ユーザーから学生のデータを入力してもらう
{
    cout << "IDを入力してください:";
    cin >> id;
    
    //英語，数学，国語の得点をランダムに生成する
    eng =  rand() % 101;
    math =  rand() % 101;
    jan =  rand() % 101;
  
    //乱数で生成した点数を総得点に計算する
    total = eng + math + jan;
}

void student::putInput(void)//最後の結果を表示する
{
    cout << id << "\t" << eng << "\t" << math << "\t" << jan << "\t" << total << endl;
}

void sort(student stud[])//総得点の高い順に各人のデータを並べ替える
{
    int i, j;

    for ( i = 0; i < MAX-1; i++)
    {
        for ( j = i+1; j < MAX; j++)
        {
            if (stud[i].total < stud[j].total)//一つ後ろのデータが確認中のデータより大きいなら、並べ替える
            {
                student temp;
                temp = stud[i];
                stud[i] = stud[j];
                stud[j] = temp;
            } 
        }
    }
}

void avg(student stud[])//各科目と総得点の平均値を計算する
{
    int i;
    int eng_total, math_total, jan_total, total_total;
    double eng_avg, math_avg, jan_avg, total_avg;
    //総得点を初期化
    eng_total = 0;
    math_total = 0;
    jan_total = 0;
    total_total = 0;

    //各科目の総得点
    for ( i = 0; i < MAX; i++)
    {
        eng_total += stud[i].eng;
        math_total += stud[i].math;
        jan_total += stud[i].jan;
        total_total += stud[i].total;
    }

    //平均値
    eng_avg = (double)eng_total/MAX;
    math_avg = (double)math_total/MAX;
    jan_avg = (double)jan_total/MAX;
    total_avg = (double)total_total/MAX;

    cout << "Avg\t" << eng_avg << "\t" << math_avg << "\t"  << jan_avg << "\t" << total_avg << endl;
}

int main()
{
    student stud[MAX];
    int i, j;

    for ( i = 0; i < MAX; i++)
    {
        cout << i+1 << "番目の学生データを入力してください。" << endl;
        stud[i].getInput(); //入力を求める
    }

    sort(stud); //ソート関数に入る

    cout << endl;
    cout << "ID_No" << "\tEng" << "\tMath" << "\tJan" << "\tTotal" << endl;

    for ( i = 0; i < MAX; i++)
    {
        stud[i].putInput(); //表示する
    }

    avg(stud); //平均を計算する

    return 0;
}
