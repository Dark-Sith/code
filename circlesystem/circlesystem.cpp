#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "circlesystem.h"
using namespace std;
#define MAX 100
//----------------使っている関数（詳しくはmain関数の下に書いています-----------------
void getuserinput(circle c[]);//ユーザーから好みを入力してもらう関数
void sort(circle c[]);//好みによって順位をつける関数
void readfile(circle c[]);//ファイルから読み込む関数
void writefile(circle c[], int grpnum);//ファイルに書き込む関数
int readline();//ファイルの行数を計算する関数
//-------------------------------------------------------------------------------

int main()
{
    int i, choice, end, grpnum;
    circle c[MAX];
    system("clear");//画面をリセットする
    //メイン画面
    cout << "---------------------部活・サークル検索---------------------" << endl;
    cout << "６つの質問からあなたに合う部活・サークルをおすすめ順に表示します。" << endl;
    cout << "検索開始 >>> 0 ｜　新しい部活・サークルの追加 >>> 1　|　退出 >>> 2" << endl;
    cout << "選択：";
    cin >> end;
    
     //0,1と2の数以外の数字が入力された場合
    if( end < 0 || end > 2){
        do{  
            cout << "エラーです。0,1と2の数学だけ入力してください！" << endl;
            cin >> end;
        }while( end < 0 || end > 2);
    }
    system("clear");
    readfile(c);
    grpnum = ((readline()-2)/8);//ファイルに保存されている団体数を計算する

    if (end == 0){
        do
        {
            cout << "希望する条件にあてはまる数字を入力してください。" << endl;

            getuserinput(c);
            sort(c);

            system("clear");
            cout<<"＜結果＞"<<endl<<"あなたにおすすめのサークル・部活（好みに合ってる店）はこちらです。"<<endl;
            //順位を表示する
            for ( i = 0; i < grpnum; i++){
                cout << i+1 << ":\t";
                c[i].display_output();
            }   

            int n, num;
            cout << "詳細を知りたい場合はサークル・部活の名前の横に表示されている数字（1~"<< grpnum << ")を入力してください >>>" << endl;
            cin >> n;
            while ( n < 1 || n > grpnum){//ある部活・サークルの数以外の数字が入力された場合
                cout << "エラーです。1から" << grpnum << "までの数学だけ入力してください！" << endl;
                cin >> n;
            }
            num = n-1;
            system("clear");

            //詳細を知りたい場合はサークル・部活の情報を表示する
            cout << "サークル名：" << c[num].name << endl;
            cout << "＜選択肢情報＞" << endl <<"種類\t|人数\t|ガチさ\t|屋内/外\t|飲み\t|男女比\t"<< endl;
            cout <<"------------------------------------------------------"<< endl;
            cout << c[num].type <<"\t|"<< c[num].crowd <<"\t|"<< c[num].gachi <<"\t|"<< c[num].venue <<"\t\t|"<< c[num].nomi <<"\t|"<< c[num].genderratio << endl;
            cout << "もう一度検索を行いますか？" << endl;
            cout << "はい >>> 0 ｜ いいえ >>> 1" << endl;
            cin >> end;
            while ( end < 0 || end > 1){//0と1の数以外の数字が入力された場合
                cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                cin >> end;
            }    
            system("clear");
        } while (end == 0);
    }
    else if (end == 1)//部活・サークルの担当者画面
    {
        do
        {
	    grpnum = ((readline()-2)/8);
            writefile(c, grpnum);
            cout << "また新しい部活・サークルを追加しますか？" << endl;
            cout << "はい >>> 0 ｜ いいえ >>> 1" << endl;
            cin >> end;
            while ( end < 0 || end > 1){//0と1の数以外の数字が入力された場合
                cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                cin >> end;
            }    
            system("clear");
        } while (end == 0);
    }
    cout << "ご利用ありがとうございました！" << endl;
    
    return 0;
}

//----------------------------使っている関数----------------------------------

void readfile(circle c[]){
    ifstream file("file.txt");  // 読み込むファイルのパスを指定
    string line;
    int i;
    for ( i = 1; i < MAX; i++){
        while(getline(file,line)){
            if(line=="%d",i){  
            getline(file,line);
            c[i-1].name=line;
            getline(file,line);
            c[i-1].type=line;
            getline(file,line);
            c[i-1].crowd=line;
            getline(file,line);
            c[i-1].gachi=line;
            getline(file,line);
            c[i-1].venue=line;
            getline(file,line);
            c[i-1].nomi=line;
            getline(file,line);
            c[i-1].genderratio=line;               
            } 
            break;
        }
    }
}

void writefile(circle c[], int grpnum){
    char ch[100];
    int count = 0;
    int input = 0;
    FILE * fp = NULL;
    fp = fopen("file.txt", "a+");
    ifstream file("file.txt");  // 読み込むファイルのパスを指定
    string line;

    while(getline(file,line)){
        if(line=="%d", grpnum + 1){
            getline(file,line);
	        cout<<"部活・サークル名:";
	        fgets(ch,sizeof(ch),stdin);
	        fgets(ch,sizeof(ch),stdin);
	        fprintf(fp,"%s",ch);

	        cout<<"運動系(0)／文化系(1) (0か1かの数字を入力してください):";
            do
            {
                cin >> input;
                if (input == 0)
                {
                    fprintf(fp,"運動系\n");
                }else if (input == 1)
                {
                    fprintf(fp,"文化系\n");
                }else
                {
                    cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                } 
            } while (input < 0 || input > 1);             

	        cout<<"大人数(0)／少人数(1) (0か1かの数字を入力してください):";
	        do
            {
                cin >> input;
                if (input == 0)
                {
                    fprintf(fp,"大人数\n");
                }else if (input == 1)
                {
                    fprintf(fp,"少人数\n");
                }else
                {
                    cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                } 
            }while (input < 0 || input > 1);   

	        cout<<"ガチ(0)／ゆるい(1) (0か1かの数字を入力してください):";
	        do
            {
                cin >> input;
                if (input == 0)
                {
                    fprintf(fp,"ガチ\n");
                }else if (input == 1)
                {
                    fprintf(fp,"ゆるい\n");
                }else
                {
                    cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                } 
            } while (input < 0 || input > 1); 

	        cout<<"屋内(0)／屋外(1) (0か1かの数字を入力してください):";
	        do
            {
                cin >> input;
                if (input == 0)
                {
                    fprintf(fp,"屋内\n");
                }
                else if (input == 1)
                {
                    fprintf(fp,"屋外\n");
                }
                else
                {
                    cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                } 
            }while (input < 0 || input > 1);    

	        cout<<"飲み多い(0)／少ない(1) (0か1かの数字を入力してください):";
	        do
            {
                cin >> input;
                if (input == 0)
                {
                    fprintf(fp,"飲み多い\n");
                }
                else if (input == 1)
                {
                    fprintf(fp,"少ない\n");
                }
                else
                {
                    cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                } 
            }while (input < 0 || input > 1);

	        cout<<"男性多い(0)／女性多い(1) (0か1かの数字を入力してください):";
	        do
            {
                cin >> input;
                if (input == 0)
                {
                    fprintf(fp,"男性多い\n");
                }
                else if (input == 1)
                {
                    fprintf(fp,"女性多い\n");
                }
                else
                {
                    cout << "エラーです。0と1の数学だけ入力してください！" << endl;
                } 
            }while (input < 0 || input > 1);

	        fprintf(fp,"%d", grpnum + 2);
            fprintf(fp,"\n");
	        fclose(fp);
	        break;
        }
    }
}

int readline(){
    string line;
    int numlines= 0;

    ifstream file("file.txt");

    while (!file.eof())
    {
        getline(file, line);
        numlines++;
    }

    file.close();

    return numlines;
}

/*
ユーザーの情報を入力していただく関数
ユーザーは自分の好みによって0と1から二択を選んで、1個があってる場合はあってるサークルの点数を１上がる
*/
void getuserinput(circle c[]){
    int i, choice;
    cout << "運動系 >>> ０　文化系 >>> １" << endl;
    cout << "選択：";
    cin >> choice;
    while ( choice < 0 || choice > 1)//0と1の数以外の数字が入力された場合
    {
        cout << "エラーです。0と1の数学だけ入力してください！" << endl;
        cin >> choice;
    }
    if (choice == 0)
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].type == "運動系")
            {
            c[i].count++;
            }
        }
    }
    else
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].type == "文化系")
            {
            c[i].count++;
            }
        }
    }

    cout << "大人数 >>> ０　少人数 >>> １" << endl;
    cout << "選択：";
    cin >> choice;
    while ( choice < 0 || choice > 1)//0と1の数以外の数字が入力された場合
    {
        cout << "エラーです。0と1の数学だけ入力してください！" << endl;
        cin >> choice;
    }
    if (choice == 0)
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].crowd == "大人数")
            {
            c[i].count++;
            }
        }
    }
    else
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].crowd == "少人数")
            {
                c[i].count++;
            }
        }
    }

    cout << "ガチ >>> ０　ゆるい >>> １" << endl;
    cout << "選択：";
    cin >> choice;
    while ( choice < 0 || choice > 1)//0と1の数以外の数字が入力された場合
    {
        cout << "エラーです。0と1の数学だけ入力してください！" << endl;
        cin >> choice;
    }
    if (choice == 0)
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].gachi == "ガチ")
            {
                c[i].count++;
            }
        }
    }
    else
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].gachi == "ゆるい")
            {
                c[i].count++;
            }
        }
    }

    cout << "屋内 >>> ０　屋外 >>> １" << endl;
    cout << "選択：";
    cin >> choice;
    while ( choice < 0 || choice > 1)//0と1の数以外の数字が入力された場合
    {
        cout << "エラーです。0と1の数学だけ入力してください！" << endl;
        cin >> choice;
    }
    if (choice == 0)
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].venue == "屋内")
            {
                c[i].count++;
            }
        }
    }
    else
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].venue == "屋外")
            {
                c[i].count++;
            }
        }  
    }

    cout << "飲み頻度：少ない >>> ０　多い >>> １" << endl;
    cout << "選択：";
    cin >> choice;
    while ( choice < 0 || choice > 1)//0と1の数以外の数字が入力された場合
    {
        cout << "エラーです。0と1の数学だけ入力してください！" << endl;
        cin >> choice;
    }
    if (choice == 0)
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].nomi == "少ない")
            {
                c[i].count++;
            }
        }
    }
    else
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].nomi == "多い")
            {
                c[i].count++;
            }
        }
    }

    cout << "男女比：男性多い >>> ０　女性多い >>> １" << endl;
    cout << "選択：";
    cin >> choice;
    while ( choice < 0 || choice > 1)//0と1の数以外の数字が入力された場合
    {
        cout << "エラーです。0と1の数学だけ入力してください！" << endl;
        cin >> choice;
    }
    if (choice == 0)
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].genderratio == "男性多い")
            {
                c[i].count++;
            }
        }
    }
    else
    {
        for ( i = 0; i < MAX; i++)
        {
            if (c[i].genderratio == "女性多い")
            {
                c[i].count++;
            }
        }
    }
}

/*
順位をつける関数
全団体の点数を比べて、順位をつける
*/
void sort(circle c[]){
    int x, y;

    for(x=0; x<MAX; x++){
        for(y=0; y<MAX; y++){
            if(c[x].count > c[y].count)
            {
                circle temp;
                temp = c[x];
                c[x] = c[y];
                c[y] = temp;
            }
        }
    }
}
