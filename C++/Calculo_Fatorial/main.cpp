#include <iostream>

using namespace std;

int main()
{
    int calculo, Valor=1, n1;
    cout << "Programa para calcular Fatoriais!" << endl;
    cout << endl;
    cout << "Qual � o n�mero que queres saber o fatorial? - " << endl;
    cin >> calculo;
    for(int i=1; i<=calculo; i++)
    {
        Valor=Valor*i;
    }
    cout << "O fatorial de " << calculo << " � " << Valor << endl;
    return 0;
}
