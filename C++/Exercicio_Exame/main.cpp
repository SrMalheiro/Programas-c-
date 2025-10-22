#include <iostream>

using namespace std;

int main()
{
    int Soma=0, Quantos=0, Numero=0, Media=0;
    cout << "Escreva um numero, quando inserir o numero 1 o programa encerra. " << endl;
    cin >> Numero;
    while(Numero!=1)
    {
        Quantos++;
        Soma=Soma+Numero;
        Media=Soma/Quantos;
        cout << "Escreva um número, quando inserir o numero 1 o programa encerra. " << endl;
        cin >> Numero;
    }
    cout << "Escreveu " << Quantos << " numeros." << endl;
    cout << "A soma dos numero e " << Soma << "." << endl;
    cout << "A media dos numeros e " << Media << "." << endl;
    return 0;
}

