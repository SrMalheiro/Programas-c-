#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

float fahrenheit(float far){
    float gc, f;
    f = far*1.8+32;
    return f;
}
float centigrados(float cent){
    float c, f;
    c = ((cent-32)*5)/9;
    return c;
}
int main()
{
    int opcao;
    float  gc, gf, c, f;
    opcao=0;
    gf=0;
    gc=0;
    while (opcao !=3){
            system("cls");
            cout << "----------------------------" << endl;
            cout << "| Conversor de temperatura |" << endl;
            cout << "----------------------------------------------------" << endl;
            cout << "| 1 -  Converter graus centigrados para fahrenheit |" << endl;
            cout << "| 2 -  Converter graus fahrenheit para centigrados |" << endl;
            cout << "| 3 -  Sair |" << endl;
            cout << "----------------------------------------------------" << endl;
            cout << "\n";
            cout << "A sua opcao:";
            cin >> opcao;
            switch (opcao){
                case 1:
                    cout << "Insira o valor da temperatura em graus centigrados" << endl;
                    cin >> gc;
                    f= fahrenheit(gc);
                    cout << "A temperatura em graus centigrados correspondente a " << gc << " graus fahrenheit e: " << f << endl;
                    system("pause");
                    break;
                case 2:
                    cout << "Insira o valor da temperatura em graus fahrenheit" << endl;
                    cin >> gf;
                    c= centigrados(gf);
                    cout << "A temperatura em graus fahrenheit correspondente a " << gf << " graus centigrados e: " << c << endl;
                    system("pause");
                    break;
            }
    }
return 0;
}
