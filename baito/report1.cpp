#include <iostream>
using namespace std;

int main()
{
    int i, total;
    double avg, var, var_res; //平均と分散
    double max = 10.0; //n個のデータ
    int rand_num[9]; //乱数を格納する配列

    total = 0; //初期化
    for ( i = 0; i < max; i++)
    {
        rand_num[i] = rand() % 100; //乱数を10個生成する(0から99までの値)
        total += rand_num[i]; //総合を計算する
    }

    avg = (double)total/max; //平均を計算する

    for ( i = 0; i < max; i++)
    {
        var += ((double)rand_num[i] - avg)*((double)rand_num[i] - avg); //(x_i - u)^2
    }

    var_res = var/max; //分散を計算する

    cout << "乱数で生成した10個のデータ" << endl;
    for ( i = 0; i < max; i++)
    {
        cout << rand_num[i] << ", "; //各データを出力する
    }
    cout << endl;
        
    cout << "平均: " << avg << "\t" << "分散: " <<  var_res << endl; //平均と分散を出力する
    
    return 0;
}
