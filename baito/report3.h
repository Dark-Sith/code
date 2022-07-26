#include <string>
#include <iostream>
using namespace std;

template<typename T1, typename T2, typename T3>//テンプレートクラス
class student
{
    private:
        T1 id;
    public:
        T2 eng;
        T2 math;
        T2 jan;
        T2 total;
        T3 avg;
        void getInput();//コンストラクタ関数(ユーザーから学生のデータを入力してもらう)
        void putInput();//最後の結果を表示する
};
