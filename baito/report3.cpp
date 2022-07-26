#include <string>
#include <iostream>
#include "report3.h"
#include <stdlib.h>
using namespace std;
#define MAX 10//最大入力できる学生数
int count = 0;//入力した学生数

void teacher_menu()
{
    cout << "教員メニュー" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "1：学生の各科目の成績を登録する" << endl;
    cout << "2：教員と学生の基本情報を表示する" << endl;
    cout << "3：学生全員の成績、各学生の総得点、各科目の平均値及び全員総得点の平均値の確認" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void search(Student *stud, string stud_id)//学生の成績を検索する関数
{
    int i = 0;
    double stud_avg;
    cout << "ID_No\t\tEng\tMath\tJan\tTotal\tAverage" << endl;
    while (i < count)
    {
        if (stud[i].stud_id == stud_id)
        {
            stud[i].ShowInformation();
            stud_avg = ((double)stud[i].total/3);//学生成績の平均値を計算する        
            cout << stud_avg << endl;
            break;
        }
        i++;
    }
    if (i >= count)//入力した学生数より多く検索すれば、学生のデータは存在しない結論が導かれた
    {
        cout << "データは存在しません。" << endl;
    }
}

void avg(Student *stud)//各科目と総得点の平均値を計算する関数
{
    int i;
    int eng_total, math_total, jan_total, total_total;
    double eng_avg, math_avg, jan_avg, total_avg;
    eng_total = 0;
    math_total = 0;
    jan_total = 0;
    total_total = 0;

    for ( i = 0; i < count; i++)
    {
        eng_total += stud[i].eng;
        math_total += stud[i].math;
        jan_total += stud[i].jan;
        total_total += stud[i].total;
    }

    eng_avg = (double)eng_total/count;
    math_avg = (double)math_total/count;
    jan_avg = (double)jan_total/count;
    total_avg = (double)total_total/count;

    cout << "Avg\t\t" << eng_avg << "\t" << math_avg << "\t"  << jan_avg << "\t" << total_avg << endl;
}

void input(Student *stud)//学生の情報を入力する関数
{
    char ch;
    do
    {
        stud[count].GetInformation();//教員から学生の情報を入力してもらう
        count++;
        if (count >= MAX)//最大MAXの学生数まで入力できる
        {
            cout << "オバーフローです！" << endl;
            break;
        }
        cout << "入力を続けますか？(y/n)";
        cin >> ch;
    } while (ch == 'y');
}

int main()
{
    Student stud[MAX];

    /*教員の情報をさっきに登録されている*/
    Teacher teacher;
    teacher.name = "CHUAH HAO MIN";
    teacher.age = 21;
    teacher.add = "Niigata, Japan";
    teacher.teach_id = "en2021t";
    teacher.department = "engineering";
    teacher.pwd = "abcd1234";
    
    int i = 0, j;
    int choice, teach_choice;
    string stud_id, login_id, login_pwd;
    char cont, reset;


    do
    {
        system("clear");
        cout << "学生ですか？教員ですか？" << endl;//ユーザーの身分を確認する
        cout << "1：学生" << endl;
        cout << "2：教員" << endl;
        cin >> choice;

        system("clear");
        switch (choice)
        {
        case 1://学生
            cout << "学生IDを入力してください：";
            cin >> stud_id;
            search(stud, stud_id);
        break;

        case 2://教員
            cout << "教員IDを入力してください：";
            cin >> login_id;
            cout << "パスワードを入力してください：";
            cin >> login_pwd;
            if ((login_id == teacher.teach_id) && (login_pwd == teacher.pwd))//教員身分の確認
            {
                do
                {
                    system("clear");
                    teacher_menu();
                    cout << "どちらを選らんでください：";
                    cin >> teach_choice;
                    switch (teach_choice)
                    {
                        case 1://学生の基本情報と各科目の成績を登録する
                            input(stud);
                            break;
                        case 2://教員と学生の基本情報を確認する
                            cout << "~~教員の基本情報~~" << endl;
                            teacher.ShowInformation();
                            cout << "~~学生の基本情報~~" << endl;
                            cout << "ID_No\t\tName\t\t\tAddress\t\tAge" << endl;
                            for ( i = 0; i < count; i++)
                            {
                                stud[i].ShowBasic();
                            }
                            break;
                        case 3://学生の成績と平均値を確認する
                            cout << "ID_No\t\tEng\tMath\tJan\tTotal" << endl;                    
                            for ( i = 0; i < count; i++)
                            {
                                stud[i].ShowInformation();
                                cout << endl;
                            }
                            avg(stud);
                            break;

                        default:
                            break;
                    }
                    cout << "教員メニューに戻りますか？(y/n)：";
                    cin >> cont;
                } while (cont == 'y');           
            }
            else
            {
                /*教員IDまたはパスワードが間違った*/
                cout << "教員IDまたはパスワードが間違ったので、もう一度ログインしてください。" << endl;
                break;
            }

            default:
                break;
        }  
        cout << "最初のメニューに戻りますか？(y/n)：";
        cin >> reset;
    } while (reset == 'y');
}  
