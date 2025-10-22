#include <iostream>

using namespace std;

int main()
{
    //Menu
    cout << "Gerar todas as combinações de letras com (8) caracteres!" << endl;
    cout << endl;

    //Variaveis
    char letras[26];
    string palavra;
    int f1, f2, f3, f4, f5, f6, f7, f8;

    //preencher a matriz letras com as letras
    //for (int i=0;i<26;i++){
    //    letras[i]=ascii[64+i];
    //}
    letras[1]='A';
    letras[2]='B';
    letras[3]='C';
    letras[4]='D';
    letras[5]='E';
    letras[6]='F';
    letras[7]='G';
    letras[8]='H';
    letras[9]='I';
    letras[10]='J';
    letras[11]='K';
    letras[12]='L';
    letras[13]='M';
    letras[14]='N';
    letras[15]='O';
    letras[16]='P';
    letras[17]='Q';
    letras[18]='R';
    letras[19]='S';
    letras[20]='T';
    letras[21]='U';
    letras[22]='V';
    letras[23]='W';
    letras[24]='X';
    letras[25]='Y';
    letras[26]='Z';

    //Programa
    for (f1=1; f1<27; f1++)
    {
        for (f2=1; f2<27; f2++)
        {
            for (f3=1; f3<27; f3++)
            {
                for (f4=1; f4<27; f4++)
                {
                    for (f5=1; f5<27; f5++)
                    {
                        for (f6=1; f6<27; f6++)
                        {
                            for (f7=1; f7<27; f7++)
                            {
                                for (f8=1; f8<27; f8++)
                                {
                                    cout << letras[f1]<<letras[f2]<<letras[f3]<<letras[f4]<<letras[f5]<<letras[f6]<<letras[f7]<<letras[f8];
                                    cout << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
