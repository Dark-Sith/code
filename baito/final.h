#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Pokemon 
{
    public:
        int hp, weight, height;

        //抽象関数
        virtual void Show()
        {
            cout << "show output" << endl;
        }
};

class Pikachu : public Pokemon
{
    public:
        string RaceName;
        int Skill();
        void Show();

        //コンストラクタ
        Pikachu(int hp_pikachu, int weight_pikachu, int height_pikachu)
        {
            hp = hp_pikachu;
            weight = weight_pikachu;
            height = height_pikachu;
        }
};

class Charmander : public Pokemon
{
    public:
        string RaceName;
        int Skill();
        void Show();

        //コンストラクタ
        Charmander(int hp_charmander, int weight_charmander, int height_charmander)
        {
            hp = hp_charmander;
            weight = weight_charmander;
            height = height_charmander;
        }
};

//Skill関数
int Pikachu::Skill()
{
    int rand_num;
    srand((unsigned) time(NULL)); 
    rand_num = 10 + (rand() % 11);

    return rand_num;
}

//オーバーライトしたShow関数
void Pikachu::Show()
{
    cout << "Pikachu" << endl;
    cout << "HP: " << hp << endl;
    cout << "Weight: " << weight << "kg" << endl;
    cout << "Height: " << height << "m" << endl;
}

//Skill関数
int Charmander::Skill()
{
    int rand_num;
    srand((unsigned) time(NULL)); 
    rand_num = 10 + (rand() % 11);

    return rand_num;
}

//オーバーライトしたShow関数
void Charmander::Show()
{
    cout << "Charmander" << endl;
    cout << "HP: " << hp << endl;
    cout << "Weight: " << weight << "kg" << endl;
    cout << "Height: " << height << "m" << endl;
}
