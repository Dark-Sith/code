#include <string>
#include <iostream>
#include "final.h"
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

//Battle関数
void Battle(Pikachu pikachu, Charmander charmander)
{
    int round_num = 1;
    if (pikachu.hp < charmander.hp)
    {
        cout << "Pikachu attacks first!" << endl;
        while ((pikachu.hp > 0) && (charmander.hp > 0))
        {
            cout << "Round " << round_num << "!" << endl;
            charmander.hp = charmander.hp - pikachu.Skill();
            pikachu.hp = pikachu.hp - charmander.Skill();
            pikachu.Show();
            charmander.Show();
            round_num++;
            cout << endl;
        }  
    }
    else
    {
        cout << "Charmander attacks first!" << endl;
        while ((pikachu.hp > 0) && (charmander.hp > 0))
        {
             cout << "Round " << round_num << "!" << endl;
            pikachu.hp = pikachu.hp - charmander.Skill();
            charmander.hp = charmander.hp - pikachu.Skill();
            pikachu.Show();
            charmander.Show();
            round_num++;
            cout << endl;
        }
    }

    cout << "End of Battle!" << endl;
    //結果判定
    if (pikachu.hp < 0)
    {
        cout << "Charmander wins!" << endl;
    }
    else
    {
        cout << "Pikachu wins!" << endl;
    } 
}

int main()
{
    int hp_pikachu, weight_pikachu, height_pikachu;
    int hp_charmander, weight_charmander, height_charmander;
    int rand_num;
    srand((unsigned) time(NULL)); 

    //乱数生成
    hp_pikachu = 100 + (rand() % 101);
    weight_pikachu = 5 + (rand() % 46);
    height_pikachu = 1 + (rand() % 5);

    hp_charmander = 100 + (rand() % 101);
    weight_charmander = 5 + (rand() % 46);
    height_charmander = 1 + (rand() % 5);

    //create object
    Pikachu pikachu(hp_pikachu, weight_pikachu, height_pikachu);
    Charmander charmander(hp_charmander, weight_charmander, height_charmander);

    //before battle
    cout << "Pokemon profile" << endl;
    pikachu.Show();
    cout << endl;
    charmander.Show();
    cout << endl;

    //battle
    Battle(pikachu, charmander); 
}
