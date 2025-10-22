#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Variaveis
    char linha;

    //Menu de apresentação
    cout << "--------------------------------------------" << endl;
    cout << "-------Texto transformado em CapsLock-------" << endl;
    cout << "--------------------------------------------" << endl;

    //Importar txt
    ifstream input_file("textolongo.txt");
    ofstream output_file("textolongo_caps.txt");

    //Verificar se dá erro na leitura
    if (!input_file) {
        cout << "Erro" << endl;
        return -1;
    }

    //Ler linha
    while (input_file.get(linha))
    {
        //Programa
        output_file.put(toupper(linha));
    }

    return 0;
}
