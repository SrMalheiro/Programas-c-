#include <iostream>

using namespace std;

int main()
{
    int QuantosNumeros;
    float numeros=0,MaiorNumero=0,MenorNumero=0;
    cout << "Calculo do minimo e do maximo" << endl;
    cout << "Quantos numeros para indicar qual e o maior e o menor" << endl;
    cin >> QuantosNumeros;
    cout << "Intruduza o numero " << endl;
    cin >> numeros;
    MaiorNumero= numeros;
    MenorNumero= numeros;
    for (int i=1; i<=QuantosNumeros-1; i++)
    {
        cout << "Intruduza o numero " << i+1 << " numeros" <<endl;
        cin >> numeros;
        if (numeros>MaiorNumero)
        {
            MaiorNumero=numeros;
        }
        if (numeros<MenorNumero)
        {
            MenorNumero=numeros;
        }
    }
    cout << "o Maior numero e " << MaiorNumero << ", ja o menor numero e " << MenorNumero << endl;
    return 0;
}
