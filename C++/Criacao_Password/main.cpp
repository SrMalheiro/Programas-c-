#include <iostream>
#include <cstdlib>
#include <climits>
#include <time.h>

using namespace std;

int main()
{
    //Menu Inicial
    cout << "-------------------------------------------------------" << endl;
    cout << "-----Programa para gerar uma password com 8 letras-----" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << endl;

    //variaveis
    int a;
    char letras[26];
    char pass[8];

    //Guardar letras
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

    srand(time(NULL));
    //Programa para gerar a password
    for (int i=1; i<9; i++)
    {
        a=rand()% 26;
        pass[i]=letras[a];
    }
    cout << "A password gerada foi: " << pass[1] << pass[2] << pass[3] << pass[4] << pass[5] << pass[6] << pass[7] << pass[8];
    return 0;
}
