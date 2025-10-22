//Bibliotecas
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    //-------------------------------------Variáveis----------------------------------------------
    string Palavra, Caracter;
    string Acentos = "áàãâèéêíìîõóôòùúû";
    int TamanhoDaPalavra, TotalDePalavras, NumeroAcentos = 0;
    int L1 = 0, L2 = 0, L3 = 0, L4 = 0, L5 = 0, L6 = 0, L7 = 0, L8 = 0, L9 = 0, L10 = 0, L11 = 0, L12 = 0, L13 = 0, L14 = 0, L15 = 0, L16 = 0, L17 = 0, L18 = 0, L19 = 0, L20 = 0;

    //-------------------------------------Menu de Apresentação-----------------------------------
    cout << "---------------------------------------" << endl;
    cout << "-------Estatísticas das Palavras-------" << endl;
    cout << "---------------------------------------" << endl;

    //-------------------------------------Abrir arquivo------------------------------------------
    ifstream input_file("palavras.txt");

    //-------------------------------------Caso dê Erro-------------------------------------------
    if (!input_file) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return -1;
    }

    //-------------------------------------Programa-----------------------------------------------
    while (input_file >> Palavra) { //Ler Palavra

        TamanhoDaPalavra = Palavra.length(); //Verificar tamanho da palavra
        TotalDePalavras++; //Somatório de Palavras

        // Verificar se o caracter contém acento
        bool temAcento = false;
        for (char c : Palavra) {
            if (Acentos.find(c) != string::npos) {
                temAcento = true;
                break;
            }
        }
            // Se o caracter contém acento, soma ao Número de Acentos
        if (temAcento) {
            NumeroAcentos++;
        }

        // Contar o tamanho das palavras
        if (TamanhoDaPalavra == 1) {
            L1++;
        }
        if (TamanhoDaPalavra == 2) {
            L2++;
        }
        if (TamanhoDaPalavra == 3) {
            L3++;
        }
        if (TamanhoDaPalavra == 4) {
            L4++;
        }
        if (TamanhoDaPalavra == 5) {
            L5++;
        }
        if (TamanhoDaPalavra == 6) {
            L6++;
        }
        if (TamanhoDaPalavra == 7) {
            L7++;
        }
        if (TamanhoDaPalavra == 8) {
            L8++;
        }
        if (TamanhoDaPalavra == 9) {
            L9++;
        }
        if (TamanhoDaPalavra == 10) {
            L10++;
        }
        if (TamanhoDaPalavra == 11) {
            L11++;
        }
        if (TamanhoDaPalavra == 12) {
            L12++;
        }
        if (TamanhoDaPalavra == 13) {
            L13++;
        }
        if (TamanhoDaPalavra == 14) {
            L14++;
        }
        if (TamanhoDaPalavra == 15) {
            L15++;
        }
        if (TamanhoDaPalavra == 16) {
            L16++;
        }
        if (TamanhoDaPalavra == 17) {
            L17++;
        }
        if (TamanhoDaPalavra == 18) {
            L18++;
        }
        if (TamanhoDaPalavra == 19) {
            L19++;
        }
        if (TamanhoDaPalavra == 20) {
            L20++;
        }
    }

    //------------------------------Resposta do Programa------------------------------------------
    cout << "Existem com 1 letra " << L1 << " palavras." << endl;
    cout << "Existem com 2 letras " << L2 << " palavras." << endl;
    cout << "Existem com 3 letras " << L3 << " palavras." << endl;
    cout << "Existem com 4 letras " << L4 << " palavras." << endl;
    cout << "Existem com 5 letras " << L5 << " palavras." << endl;
    cout << "Existem com 6 letras " << L6 << " palavras." << endl;
    cout << "Existem com 7 letras " << L7 << " palavras." << endl;
    cout << "Existem com 8 letras " << L8 << " palavras." << endl;
    cout << "Existem com 9 letras " << L9 << " palavras." << endl;
    cout << "Existem com 10 letras " << L10 << " palavras." << endl;
    cout << "Existem com 11 letras " << L11 << " palavras." << endl;
    cout << "Existem com 12 letras " << L12 << " palavras." << endl;
    cout << "Existem com 13 letras " << L13 << " palavras." << endl;
    cout << "Existem com 14 letras " << L14 << " palavras." << endl;
    cout << "Existem com 15 letras " << L15 << " palavras." << endl;
    cout << "Existem com 16 letras " << L16 << " palavras." << endl;
    cout << "Existem com 17 letras " << L17 << " palavras." << endl;
    cout << "Existem com 18 letras " << L18 << " palavras." << endl;
    cout << "Existem com 19 letras " << L19 << " palavras." << endl;
    cout << "Existem com 20 letras " << L20 << " palavras." << endl;
    cout << "Existem " << TotalDePalavras << " palavras ao total no arquivo." << endl;
    cout << "Existem " << NumeroAcentos << " palavras com acentos." << endl;

    return 0;
}
