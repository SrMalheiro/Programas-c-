#include <iostream>

using namespace std;

int calculo(int calculo)
{
    int Valor=1;
    for(int i=1; i<=calculo; i++)
    {
        Valor=Valor*i;
    }
    return Valor;
}

int main()
{
    int Fatorial, Resultado;
    cout << "Programa para calcular Fatoriais!" << endl;
    cout << endl;
    cout << "Qual � o n�mero que queres saber o fatorial? - ";
    cin >> Fatorial;
    Resultado=calculo(Fatorial);
    cout << "O fatorial de " << Fatorial << " � " << Resultado << endl;
    return 0;
}
