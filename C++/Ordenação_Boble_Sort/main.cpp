#include <iostream>

using namespace std;

int main()
{
    cout << "Programa de ordenação de números (Bubble Sort)" << endl;

    int numeros[50];
    int i, j, m, k;
    int temp;

    do {
        cout << "Introduza um numero. Para terminar a contagem insira 0 - ";
        i++;
        cin >> numeros[i];
    } while(numeros[i]!=0);

    for (k=1; k<i; k++){
            for (m=1; m<i-1; m++){
                    if (numeros[m] > numeros[m+1])
                    {
                        temp=numeros[m];
                        numeros[m]=numeros[m+1];
                        numeros[m + 1]=temp;
                    }
            }
    }

    cout << "Lista dos numeros Ordenados de forma crescente:" << endl;
    for (j=1; j<i; j++){
            cout << numeros[j] << endl;
    }

    return 0;
}
