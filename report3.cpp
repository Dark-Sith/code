#include <string>
#include <iostream>
#include <exception>
#include "report3.h"
using namespace std;
#define MAX 10

template<typename T1, typename T2, typename T3, typename T4, typename T5>
void student<string, int, int, int, int>::getInput()//ユーザーから学生のデータを入力してもらう
{
    cout << "IDを入力してください:";
    cin >> id;
    cout << "英語の点数:";
    cin >> eng;
    try
    {
        if((eng < 0) || (eng > 100))
        {
            throw eng;
            cout << "less than 0 or more than 100" << endl;
        }
    }
    catch(int eng)
    {
        cout << "0 〜 100 の整数を再入力してください:";
        cin >> eng;
        if((eng < 0) || (eng > 100))
        {
            cout << "0 〜 100 以外の整数を入力されました！" << endl;
            exit(1);
        }
    }
    
    cout << "数学の点数:";
    cin >> math;
    try
    {
        if((math < 0) || (math > 100))
        {
            throw math;
            cout << "less than 0 or more than 100" << endl;
        }
    }
    catch(int math)
    {
        cout << "0 〜 100 の整数を再入力してください:";
        cin >> eng;
        if((math < 0) || (math > 100))
        {
            cout << "0 〜 100 以外の整数を入力されました！" << endl;
            exit(1);
        }
    }

    cout << "国語の点数:";
    cin >> jan;
    try
    {
        if((jan < 0) || (jan > 100))
        {
            throw eng;
            cout << "less than 0 or more than 100" << endl;
        }
    }
    catch(int jan)
    {
        cout << "0 〜 100 の整数を再入力してください:";
        cin >> jan;
        if((jan < 0) || (jan > 100))
        {
            cout << "0 〜 100 以外の整数を入力されました！" << endl;
            exit(1);
        }
    }
  
    total = eng + math + jan;
}

template<typename T1, typename T2, typename T3, typename T4, typename T5>
void student<string, int, int, int, int>::putInput()//最後の結果を表示する
{
    cout << id << "\t" << eng << "\t" << math << "\t" << jan << "\t" << total << endl;
}

template<class T>
void sort(T stud[], int n)
{
    int i, j;

    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (stud[i].total < stud[j].total)//一つ後ろのデータが確認中のデータより大きいなら、並べ替える
            {
                swap(stud[i], stud[j]);
            } 
        }
    }
}

void avg(student stud[])//各科目と総得点の平均値を計算する
{
    int i;
    int eng_total, math_total, jan_total, total_total;
    double eng_avg, math_avg, jan_avg, total_avg;
    eng_total = 0;
    math_total = 0;
    jan_total = 0;
    total_total = 0;

    for ( i = 0; i < MAX; i++)
    {
        eng_total += stud[i].eng;
        math_total += stud[i].math;
        jan_total += stud[i].jan;
        total_total += stud[i].total;
    }

    eng_avg = (double)eng_total/MAX;
    math_avg = (double)math_total/MAX;
    jan_avg = (double)jan_total/MAX;
    total_avg = (double)total_total/MAX;

    cout << "Avg\t" << eng_avg << "\t" << math_avg << "\t"  << jan_avg << "\t" << total_avg << endl;
}

int main()
{
    student<string, int, int, int, int> stud[MAX];
    int i, j;

    for ( i = 0; i < MAX; i++)
    {
        cout << i+1 << "番目の学生データを入力してください。" << endl;
        stud[i].getInput();
    }

    sort(stud, 10);

    cout << endl;
    cout << "ID_No" << "\tEng" << "\tMath" << "\tJan" << "\tTotal" << endl;

    for ( i = 0; i < MAX; i++)
    {
        stud[i].putInput();
    }

    avg(stud);

    return 0;
}
