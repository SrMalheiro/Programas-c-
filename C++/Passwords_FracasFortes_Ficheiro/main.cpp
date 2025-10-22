#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //Variaveis
    string linha;
    int tamanho, forte=0, fraca=0, media=0;

    //Menu de apresentação
    cout << "------------------------------------------------------------" << endl;
    cout << "-------Verificar passwords com + ou - de 5 caracteres-------" << endl;
    cout << "------------------------------------------------------------" << endl;

    //Importar txt
    ifstream input_file("password.txt");

    //Verificar se dá erro na leitura
    if (!input_file) {
        cout << "Erro" << endl;
        return -1;
    }

    //Ler linha
    while (getline(input_file, linha))
    {
        //Programa
        tamanho=linha.length();

        //Para vereficar se existem erros na contagem de letras é só tirar as barras '//'
        //cout << linha << " - " << tamanho << endl;

        if (tamanho>5)
        {
            forte++;
        }
        if (tamanho<5)
        {
            fraca++;
        }
        if (tamanho==5)
        {
            media++;
        }
    }

    //Resposta do programa
    cout << "Existem " << forte << " passwords com mais de 5 caracteres. Password Forte." << endl;
    cout << "Existem " << fraca << " passwords com menos de 5 caracteres. Password Fraca" << endl;
    cout << "Existem " << media << " passwords com 5 caracteres. Password Média" << endl;
    return 0;
}
