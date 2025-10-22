#include <iostream>
#include <chrono>
#include <iomanip> // Para controlar a precisão da saída

using namespace std;

int main()
{
    //menu inicial
    cout << "---------------------------------------------" << endl;
    cout << "------Programa de ordenação de números-------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "---!O programa está limitado a 50 numeros!---" << endl;
    cout << "---------------------------------------------" << endl;

    //variaveis
    int numeros[50];
    int i, a, b, c;
    int opcao, temp;

    //insercao de numeros
    do {
        cout << "Introduza um numero. Para terminar a contagem insira 0 - ";
        i++;
        cin >> numeros[i];
    } while(numeros[i]!=0);

    //menu
    cout << "Fazer operacao bublle sort (Ordenar numeros) - Escreva 1" << endl;
    cout << "Fazer operacao insertion sort (Ordenar numeros) - Escreva 2" << endl;
    cin >> opcao;

    //caso o valor seja invalido
    while (opcao<1||opcao>2)
    {
    cout << "Valor Invalido! Insira a opcao escolhida. (1 ou 2) " << endl;
    cin>>opcao;
    }

    //opcao do menu
    auto start = chrono::steady_clock::now();

    switch(opcao){
    case (1): //bubble sort
            for (a=1; a<i; a++){
                    for (b=1; b<i-1; b++){
                            if (numeros[b] > numeros[b+1])
                            {
                                temp=numeros[b];
                                numeros[b]=numeros[b+1];
                                numeros[b + 1]=temp;
                            }
                    }
            }
            break;
    case (2): //insertion sort
            for (int d=1; d<i; d++){
                temp=numeros[d];
                int e=d-1;
                while (e>=0 && numeros[e]>temp){
                    numeros[e+1]=numeros[e];
                    e=e-1;
                }
                numeros[e+1]=temp;
            }
            break;
    }
    auto end = chrono::steady_clock::now();

    //escrever numeros
    cout << "Lista dos numeros Ordenados de forma crescente:" << endl;
    for (c=0; c<i-1; c++){
            cout << numeros[c] << endl;
    }

    //cout << fixed << setprecision(6); // Para mostrar até 3 casas decimais
    cout << "O programa demorou " << std::chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " nanosegundos para realizar a ordenacao." << endl;

    return 0;
}
