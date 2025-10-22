//Bibliotecas
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    //-------------------------------------Vari�veis----------------------------------------------
    string Palavra, PalavraLonga;
    int TamanhoDaPalavra, TamanhoPalavraLonga;

    //-------------------------------------Menu de Apresenta��o-----------------------------------
    cout << "---------------------------------------" << endl;
    cout << "-------Estat�sticas das Palavras-------" << endl;
    cout << "---------------------------------------" << endl;

    //-------------------------------------Abrir arquivo------------------------------------------
    ifstream input_file("exemplo.txt");

    //-------------------------------------Caso d� Erro-------------------------------------------
    if (!input_file) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return -1;
    }

    //-------------------------------------Programa-----------------------------------------------
    while (input_file >> Palavra) { //Ler Palavra
        TamanhoDaPalavra = Palavra.length(); //Verificar tamanho da palavra
        if (TamanhoDaPalavra > TamanhoPalavraLonga) {
            PalavraLonga=Palavra;
            TamanhoPalavraLonga=PalavraLonga.length();
        }
    }
    TamanhoPalavraLonga=PalavraLonga.length();

    //------------------------------Resposta do Programa------------------------------------------
    cout << "A palavra mais longa �: " << PalavraLonga << endl;
    cout << "O tamanho da palavra �: " << TamanhoPalavraLonga << " letras." << endl;

    return 0;
}
