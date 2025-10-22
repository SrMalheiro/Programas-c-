#include <iostream>

using namespace std;

int main()
{
    int FinalAno=2025, FinalMes=05, FinalDia=06 ;
    int AtualAno, AtualMes, AtualDia;
    int Dias, Meses, TotalDia;
    cout << "Programa para calcular dias restantes para o fianl do ano letivo" << endl;
    cout << "Qual o Ano atual?" << endl;
    cin >> AtualAno;
    cout << "Qual o Mes atual?" << endl;
    cin >> AtualMes;
    cout << "Qual o Dias atual?" << endl;
    cin >> AtualDia;

    if (AtualAno==FinalAno)
        {
        Meses=FinalMes-AtualMes-1;
        if (FinalDia<AtualDia)
            Dias= AtualDia-FinalDia;
        else
            Dias= FinalDia-AtualDia;
        TotalDia=Meses*30+Dias;
        }
    else
        {
        Meses=FinalMes-1;
        Dias=FinalDia;
        Meses=Meses+(12-AtualMes-1);
        Dias=Dias+(30-AtualDia);
        TotalDia=Meses*30+Dias;

        }
        cout<< "Restam "<<TotalDia<< " dias para o fianl do ano" << endl;
    return 0;
}
