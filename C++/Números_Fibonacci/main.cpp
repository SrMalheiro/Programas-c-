#include <iostream>

using namespace std;

int main()
{
    //Variáveis
    signed long long int f1=0, t1=0, t2=1;
    signed long long int QuantidadeNumeros, ProximoTermo;
    //Menu
    cout << "-----------------------------------------------" << endl;
    cout << "----------Calculo de Numero Fibonacci----------" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << endl;
    cout << endl;

    //Escolha cliente
    cout << "Quantos numeros da sequencia quer ver? -> ";
    cin >> QuantidadeNumeros;
    while (QuantidadeNumeros<0||QuantidadeNumeros>92)
    {
    cout << "Valor Invalido Dado Os Limites Da Plantaforma" << endl;
    cout << "Quantos numeros da sequencia quer ver? -> ";
    cin >> QuantidadeNumeros;
    }
    cout << endl;

    //Programa
    for(f1=0; f1<QuantidadeNumeros+1; f1++){
        if(f1 == 0) {
            cout << t1 << ", ";
        }
        if(f1 == 2) {
            cout << t2 << ", ";
        }
        ProximoTermo = t1 + t2;
        t1 = t2;
        t2 = ProximoTermo;

        cout << ProximoTermo << ", ";
    }
    return 0;
}
