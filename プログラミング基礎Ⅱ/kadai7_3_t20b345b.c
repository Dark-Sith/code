/*
第3回レポート課題3
T20B345B CHUAH HAO MIN
*/
#include <stdio.h>
#include <string.h> 
#define MAX_DATA 100
#define NAME_SIZE 63
typedef struct 
{
    char name[NAME_SIZE];
    int height;
    float weight;
    long schols;
}student;
void sort_name (student stddata[], int n);
void swap (student *x, student *y);//挿入ソート(insertion sort)

int main(void)
{
    FILE *fp, *fp2;
    char filename[100], new[100];
    int i, max;
    student data[MAX_DATA];

    printf("テキストファイルに保存されている学生の名前,身長,体重,奨学金のデータを読み込んで,名前を昇順にソートした結果を別のテキストファイルに保存するプログラム\n");
    printf("コピー元ファイル名：");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    
    if (fp == NULL)
    {
        printf("ファイルは存在しません。\n");
    }

    printf("コピー先ファイル名：");
    scanf("%s",new);
    fp2 = fopen(new,"w");

    for ( i = 0; i < MAX_DATA; i++)
    {
        if (fscanf(fp,"%s%d%f%ld",&data[i].name, &data[i].height, &data[i].weight, &data[i].schols) != 4)
        {
            break;
        }
    }
    max = i;

    sort_name(data, max);

    for ( i = 0; i < max; i++)
    {
        fprintf(fp2,"%s\t%d\t%.1f\t%ld\n",data[i].name, data[i].height, data[i].weight, data[i].schols);
    }

    fclose(fp); fclose(fp2);

    return 0;
}

void sort_name (student stddata[], int n)//挿入ソート(insertion sort)
{
    student temp;
    int i, j;

    for ( i = 1; i < n; i++)
    {
        temp = stddata[i];

        for ( j = i; j >= 1 && strcmp(stddata[j-1].name, temp.name) > 0; j--)
        {
            swap (&stddata[j], &stddata[j-1]);
        }
        stddata[j] = temp;
    }
}

void swap (student *x, student *y)
{
    *x = *y;
}
/*
1.コンパイルと実行結果
chuahhm@chuahhm-PC:~/Documents/pro2$ cat student.txt
ItouHirobumi    169     67.5    60000
KurodaKiyotaka  172     63.6    0
SanjouSanetomi  173     61.4    70000
YamagataAritomo 178     73.9    50000
MatsukataMasayoshi      165     78.7    90000
OokumaShigenobu 166     59.4    70000
KatsuraTarou    174     64.4    80000
SaionjiKinmochi 169     57.1    0
YamamotoGonbee  165     69.1    0
TerauchiMasatake        171     44.4    0
TakahashiKorekiyo       176     71.6    70000
KatouTomosaburou        173     65.4    0
KiyouraKeigo    178     65.7    70000
KatouTakaaki    172     73.4    0
WakatsukiReijirou       177     61.4    90000
TanakaGiichi    169     62.5    0
HamaguchiOsachi 166     53.3    0
InukaiTsuyoshi  169     50.1    0
SatouMakoto     175     57.9    70000
OkadaKeisuke    166     65.9    0
HirotaKouki     173     59.2    0
HayashiSenjuurou        168     52.8    60000
KonoeFumimaro   172     72.3    60000
HiranumaKiichirou       166     57.8    70000
AbeNobuyuki     171     63.5    70000
YonaiMitsumasa  163     63.6    0
ToujouHideki    168     61.6    90000
KoisoKuniaki    172     66.8    80000
SuzukiKantarou  169     61.5    0
HigashikuninomiyaNaruhikoou     175     50.1    80000
ShideharaKijuurou       168     55.3    0
YoshidaShigeru  161     65.6    0
KatayamaTetsu   166     53.4    90000
AshidaHitoshi   174     60.8    70000
HatoyamaIchirou 170     56.0    60000
IshibashiTanzan 172     54.1    0
KishiNobusuke   174     55.3    30000
IkedaHayato     162     60.3    0
SatouEisaku     168     65.0    0
TanakaKakuei    168     62.7    0
MikiTakeo       166     72.2    0
FukudaTakeo     170     61.6    50000
OohiraMasayoshi 176     51.3    0
SuzukiZenkou    170     63.7    80000
NakasoneYasuhiro        175     64.2    0
TakeshitaNoboru 168     66.2    60000
UnoSousuke      170     67.6    0
KaifuToshiki    167     74.0    70000
MiyazawaKiichi  173     59.2    60000
HosokawaMorihiro        169     65.7    90000
HataTsutomu     172     63.5    0
MurayamaTomiichi        173     58.9    0
HashimotoRyuutarou      170     80.9    0
ObuchiKeizou    174     61.5    50000
MoriYoshirou    179     52.2    0
KoizumiJunichirou       172     77.9    70000
AbeShinzou      170     66.2    60000
FukudaYasuo     174     54.5    70000
AsouTarou       171     68.6    0
HatoyamaYukio   166     73.9    0
chuahhm@chuahhm-PC:~/Documents/pro2$ 
chuahhm@chuahhm-PC:~/Documents/pro2$ gcc -o kadai7_3_t20b345b kadai7_3_t20b345b.c 
chuahhm@chuahhm-PC:~/Documents/pro2$ ./kadai7_3_t20b345b 
テキストファイルに保存されている学生の名前,身長,体重,奨学金のデータを読み込んで,名前を昇順にソートした結果を別のテキストファイルに保存するプログラム
コピー元ファイル名：student.txt
コピー先ファイル名：output.txt
chuahhm@chuahhm-PC:~/Documents/pro2$ cat output.txt 
AbeNobuyuki     171     63.5    70000
AbeShinzou      170     66.2    60000
AshidaHitoshi   174     60.8    70000
AsouTarou       171     68.6    0
FukudaTakeo     170     61.6    50000
FukudaYasuo     174     54.5    70000
HamaguchiOsachi 166     53.3    0
HashimotoRyuutarou      170     80.9    0
HataTsutomu     172     63.5    0
HatoyamaIchirou 170     56.0    60000
HatoyamaYukio   166     73.9    0
HayashiSenjuurou        168     52.8    60000
HigashikuninomiyaNaruhikoou     175     50.1    80000
HiranumaKiichirou       166     57.8    70000
HirotaKouki     173     59.2    0
HosokawaMorihiro        169     65.7    90000
IkedaHayato     162     60.3    0
InukaiTsuyoshi  169     50.1    0
IshibashiTanzan 172     54.1    0
ItouHirobumi    169     67.5    60000
KaifuToshiki    167     74.0    70000
KatayamaTetsu   166     53.4    90000
KatouTakaaki    172     73.4    0
KatouTomosaburou        173     65.4    0
KatsuraTarou    174     64.4    80000
KishiNobusuke   174     55.3    30000
KiyouraKeigo    178     65.7    70000
KoisoKuniaki    172     66.8    80000
KoizumiJunichirou       172     77.9    70000
KonoeFumimaro   172     72.3    60000
KurodaKiyotaka  172     63.6    0
MatsukataMasayoshi      165     78.7    90000
MikiTakeo       166     72.2    0
MiyazawaKiichi  173     59.2    60000
MoriYoshirou    179     52.2    0
MurayamaTomiichi        173     58.9    0
NakasoneYasuhiro        175     64.2    0
ObuchiKeizou    174     61.5    50000
OkadaKeisuke    166     65.9    0
OohiraMasayoshi 176     51.3    0
OokumaShigenobu 166     59.4    70000
SaionjiKinmochi 169     57.1    0
SanjouSanetomi  173     61.4    70000
SatouEisaku     168     65.0    0
SatouMakoto     175     57.9    70000
ShideharaKijuurou       168     55.3    0
SuzukiKantarou  169     61.5    0
SuzukiZenkou    170     63.7    80000
TakahashiKorekiyo       176     71.6    70000
TakeshitaNoboru 168     66.2    60000
TanakaGiichi    169     62.5    0
TanakaKakuei    168     62.7    0
TerauchiMasatake        171     44.4    0
ToujouHideki    168     61.6    90000
UnoSousuke      170     67.6    0
WakatsukiReijirou       177     61.4    90000
YamagataAritomo 178     73.9    50000
YamamotoGonbee  165     69.1    0
YonaiMitsumasa  163     63.6    0
YoshidaShigeru  161     65.6    0
chuahhm@chuahhm-PC:~/Documents/pro2$ 
2.考察もしくはコメント
丸め誤差を確認することができた。
*/
