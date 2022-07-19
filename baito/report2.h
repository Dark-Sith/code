#include <string>
#include <iostream>

//hファイルの中で、クラスを定義する
class student
{
    private:
        char id[100]; //学籍番号を格納する配列
        int eng, math, jan, total;
    public:
        //コンストラクタ関数
        void getInput(void);//ユーザーから学生のデータを入力してもらう
        void putInput(void);//最後の結果を表示する

        //フレンド関数
        friend void sort(student stud[]);//総得点の高い順に各人のデータを並べ替える
        friend void avg(student stud[]);//各科目と総得点の平均値を計算する
};
