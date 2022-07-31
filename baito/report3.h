#include <string>
#include <iostream>
using namespace std;

class People
{ 
    public:
        string name; //名前

        /* 仮想関数 */
        virtual void Show()
        {
            cout << "show output" << endl;
        }
};

/* 派生クラス:Student */
class Student:public People
{
    /* メンバー関数:学生ID, 各科目の点数 */
    public: 
        string stud_id;
        int eng, math, lang;
        void Show();
        void Registration();
};

/* 派生クラス:Teacher */
class Teacher: public People
{
    /* メンバー関数:教員ID, 所属学科, パスワード */
    public:
        string teach_id, department, pwd;
        void Show();
};

//情報を入力する関数
void Student::Registration()
{
    string student_name;
    cout << "氏名を入力してください：";
    cin >> name;
    cout << "学生IDを入力してください：";
    cin >> stud_id;
    cout << "英語の点数:";
    cin >> eng;
    cout << "数学の点数:";
    cin >> math;
    cout << "国語の点数:";
    cin >> lang;
}

//情報を読みだす関数
void Student:: Show()
{
    cout << stud_id << "\t\t" << eng << "\t" << math << "\t" << lang << "\t";
}

void Teacher:: Show()
{
    /* `vtable for xx' に対する定義されていない参照のエラーを防ぐため作成した関数 */
}
