#include <string>
#include <iostream>
#include "report3.h"
#include <stdlib.h>
using namespace std;
#define MAX 5//最大入力できる学生数
int count = 0;//入力した学生数

void teacher_menu()
{
    cout << "教員メニュー" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "1：学生の各科目の成績を登録する" << endl;
    cout << "2：学生全員の成績の確認" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void search(Student *stud, string stud_id)//学生の成績を検索する関数
{
    int i = 0;
    cout << "ID_No\t\tEng\tMath\tLang\t" << endl;
    while (i < count)
    {
        if (stud[i].stud_id == stud_id)
        {
            stud[i].Show(); 
            cout << endl;
            break;
        }
        i++;
    }
    if (i >= count)//入力した学生数より多く検索すれば、学生のデータは存在しない結論が導かれた
    {
        cout << "データは存在しません。" << endl;
    }
}

void input(Student *stud)//学生の情報を入力する関数
{
    char ch;
    do
    {
        stud[count].Registration();//教員から学生の情報を入力してもらう
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
    /*教員の情報を事前に登録されている*/
    Teacher teacher;
    /*自分変えて！*/
    teacher.name = "Chuah Hao Min";
    teacher.teach_id = "en2021t";
    teacher.department = "engineering";
    teacher.pwd = "abcd1234";
    
    int i = 0, j;
    int choice, teach_choice;
    string stud_id, login_id, login_pwd;
    char cont, reset;

    do
    {
        system("clear"); //画面をリセット
        cout << "学生ですか？教員ですか？" << endl;//ユーザーの身分を確認する
        cout << "1：学生" << endl;
        cout << "2：教員" << endl;
        cin >> choice;

        system("clear");
        /* 学生か教員か */
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
                        case 2://学生の成績を確認する                   
                            for ( i = 0; i < count; i++)
                            {
                                cout << "学生ID\t\t英語\t数学\t国語" << endl;
                                stud[i].Show();
                                cout << endl;
                            }
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
