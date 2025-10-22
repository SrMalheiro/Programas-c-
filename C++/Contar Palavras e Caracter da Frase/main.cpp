#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    //Variáveis
    string Frase, Palavra;
    char Caractere;
    int QuantidadePalavras=0, TotalCaractere=0;

    //Menu
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "------Programa que conta um caractere e o total de palavras de uma frase.-------" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << endl;

    //Área Cliente
    cout << "Escreva uma frase a sua escolha: ";
    getline(cin, Frase);
    cout << endl;
    cout << "Qual o caractere quer que faca-mos a contagem? R: ";
    cin >> Caractere;

    //Programa: Total de palavras
    stringstream ss(Frase);
    while (ss >> Palavra)
    {
        QuantidadePalavras++;
    }

    //Programa: Total de um certo caractere
    for (char c : Frase)
    {
        if (c == Caractere)
        {
            TotalCaractere++;
        }
    }

    //Resposta do Programa
    cout << "Existem, na frase escrita, " << QuantidadePalavras << " palavras." << endl;
    cout << "O caracter " << Caractere << ", aparece " << TotalCaractere << " vezes na frase." << endl;

    //Ver erros
    //cout << Frase << endl; //Ver se está a ler corretamente a frase
    //cout << Caractere << endl; //Ver se está a ler corretamente a letra


    //Return
    cout << "--------------------------------FIM DO PROGRAMA---------------------------------" << endl;
    return 0;
}
