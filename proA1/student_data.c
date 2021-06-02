#include <stdio.h>
#include<math.h>

typedef struct 
{
    char id_no[10];//学籍番号
    double eng;//英語の成績
    double math;//数学の成績
    double jan;//国語の成績
    double total;//総得点
}student;

void datainput(student stud[], int max);//学生の学生番号と成績を入力してもらう
void arrange(student stud[], int max);//総得点の高い順の計算
void dataoutput(student stud[], int max);//結果表示する
void avg(student stud[], int max);//平均の計算と表示
void dev(student stud[], int max);//標準偏差の計算と表示
double eng_avg, math_avg, jan_avg, total_avg;

int main(void)
{
    int max;

    printf("何人分の成績を入力しますか? >>> ");
    scanf("%d",&max);//max人分まで
    student stud[max];

    datainput(stud, max);//学生の学生番号と成績を入力してもらう
    arrange(stud, max);//総得点の高い順の計算
    dataoutput(stud, max);//並べ替えてから、結果表示する   

    printf("*********************************************\n");
    avg(stud, max);//平均の計算と表示
    dev(stud, max);//標準偏差の計算と表示

    return 0;
}

void datainput(student stud[], int max)
{
    int i;
    for ( i = 0; i < max; i++)
    {
        printf("%d人目のデータ:\n", i+1);
        printf("学籍番号:");
        scanf("%s",stud[i].id_no);
        printf("英語の点数:");
        scanf("%lf",&stud[i].eng);
        printf("数学の点数:");
        scanf("%lf",&stud[i].math);
        printf("国語の点数:");
        scanf("%lf",&stud[i].jan);
        stud[i].total = stud[i].eng + stud[i].math + stud[i].jan;
    }
}

void arrange(student stud[], int max)
{
    int i, j;
    student temp;
    for ( i = 0; i < max; i++)
    {
        for ( j = i+1; j < max; j++)
        {
            if (stud[i].total < stud[j].total)
            {
                temp = stud[i];
                stud[i] = stud[j];
                stud[j] = temp;
            }
        }
    }
}

void dataoutput(student stud[], int max)
{
    int i;
    printf("ID_No\t\tEng\tMath\tJan\tTotal\n");

    for(i = 0; i < max; i++)
    {
      printf("%s\t", stud[i].id_no);
      printf("%.1f\t", stud[i].eng);
      printf("%.1f\t", stud[i].math);
      printf("%.1f\t", stud[i].jan);
      printf("%.1f\n", stud[i].total);
    }
}

void avg(student stud[], int max)
{
    int i;

    for ( i = 0; i < max; i++)
    {
        eng_avg += stud[i].eng;
        math_avg += stud[i].math;
        jan_avg += stud[i].jan;
        total_avg += stud[i].total;
    }

    eng_avg = eng_avg/max;
    math_avg = math_avg/max;
    jan_avg = jan_avg/max;
    total_avg = total_avg/max;

    printf("Avg\t\t%.1f\t%.1f\t%.1f\t%.1f\n",eng_avg,math_avg,jan_avg,total_avg);    
}

void dev(student stud[], int max)
{
    int i;
    double eng_var, math_var, jan_var, total_var = 0.0;
    double eng_dev, math_dev, jan_dev, total_dev = 0.0;

    for ( i = 0; i < max; i++)
    {
        eng_var += stud[i].eng * stud[i].eng;
        math_var += stud[i].math * stud[i].math;
        jan_var += stud[i].jan * stud[i].jan;
        total_var += stud[i].total * stud[i].total;
    }
    eng_dev = sqrt(eng_var/max - (eng_avg * eng_avg));
    math_dev = sqrt(math_var/max - (math_avg * math_avg));
    jan_dev = sqrt(jan_var/max - (jan_avg * jan_avg));
    total_dev = sqrt(total_var/max - (total_avg * total_avg));

    printf("Dev\t\t%.1f\t%.1f\t%.1f\t%.1f\n",eng_dev,math_dev,jan_dev,total_dev);
}