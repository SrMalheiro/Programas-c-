#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //Variáveis
    string Frase, Palavra, MaiorPalavra, MenorPalavra, FraseContrario;
    vector<string> Palavras;
    //char ;
    int TamanhoDaPalavra=0, TamanhoMaiorPalavra=0, TamanhoMenorPalavra=9999*9999, QuantidadeCaracteres=0;

    //Menu
    cout << "-------------------------------------" << endl;
    cout << "----------Analise de Frases----------" << endl;
    cout << "-------------------------------------" << endl;
    cout << endl;
    cout << endl;

    //Cliente
    cout << "Escreva uma frase a sua escolha: ";
    getline(cin, Frase);
    cout << endl;

    //Programa
        //Tamanho das Palavras
    istringstream stream(Frase);
    while (stream >> Palavra) { //Ler Palavra
        TamanhoDaPalavra = Palavra.length(); //Verificar tamanho da palavra
        if (TamanhoDaPalavra > TamanhoMaiorPalavra) {
            MaiorPalavra=Palavra;
            TamanhoMaiorPalavra=MaiorPalavra.length();
        }
        if (TamanhoDaPalavra < TamanhoMenorPalavra) {
            MenorPalavra=Palavra;
            TamanhoMenorPalavra=MenorPalavra.length();
        }
    }
    //Resposta
    cout << endl;
    cout << "A palavra maior e: " << MaiorPalavra << endl;
    cout << "A palavra menor e: " << MenorPalavra << endl;

        //Inverter a frase
    istringstream ss(Frase);
    while (ss >> Palavra) {
        Palavras.push_back(Palavra);
    }
    int n = Palavras.size();
    for (int i=0; i < n / 2; i++) {
        swap (Palavras[i], Palavras[n-1-i]);
    }
    cout << "A frase em ordem contraria fica: ";
    for (const string& p: Palavras) {
        cout << p << " ";
    }


    //Return
    return 0;
}
