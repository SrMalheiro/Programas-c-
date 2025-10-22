#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    auto inicio = std::chrono::high_resolution_clock::now();
    cout << "Programa de ordenação de números (Bubble Sort)" << endl;
    //variaveis
    int numeros[50];
    int i, j, m, k;
    int temp, opcao,duracao;

    //insercao de numeros
    do {
        cout << "Introduza um numero. Para terminar a contagem insira 0 - ";
        i++;
        cin >> numeros[i];
    } while(numeros[i]!=0);

    //menu
    cout << "Fazer operação Buble Sort-- Escerva 1" << endl;
    cout << "Fazer operação-- Escreva 2" << endl;
    cin >> opcao;

    //caso o valor seja invalido
    while(opcao<1||opcao>2)
    {
        cout <<"Opcao invalida! Escreva 1 ou 2" <<endl;
        cin>>opcao;
    }
    //opcao do menu
   switch(opcao){
   case(1): //bubble sort
   {
  for (int i = 0; i < 100000000; i++) {
        int x = i * 2;
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

   }
   case (2):
        {
    }
   }
   //escrever numeros
    cout << "Lista dos numeros Ordenados de forma crescente:" << endl;
    for (j=1; j<i; j++){
            cout << numeros[j] << endl;
    }

    return 0;
}
}
