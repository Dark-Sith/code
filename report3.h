#include <string>
#include <iostream>
using namespace std;

template<typename T1, typename T2, typename T3, typename T4, typename T5>
class student
{
    private:
        T1 id;
    public:
        T2 eng;
        T3 math;
        T4 jan;
        T5 total;
        void getInput();//ユーザーから学生のデータを入力してもらう
        void putInput();//最後の結果を表示する
        void avg(student stud[]);
};
