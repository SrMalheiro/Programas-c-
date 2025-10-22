#include <iostream>

using namespace std;

int main()
{
    int numero, resto, num_binario, num_divisoes, quociente;
    cout << "Insira um numero positivo" << endl;
    cin >> numero;
    quociente=numero;
    num_divisoes=0;
    do{
            quociente=quociente-2;
            num_divisoes=num_divisoes+1;
        }
    while (quociente>=1);
    cout<<num_divisoes<<endl;
    do{
       resto=numero%2;
        if (resto==0)
            {
                num_binario=0;
                cout<<num_binario;
                cout << endl << "Numero não primo" << endl;
            }
        else
             {
                num_binario=1;
                cout<<num_binario;
                cout << endl << "Numero primo" << endl;
            }
       numero=numero-2;
    }
    while (numero=0);
    system("pause");
    return 0;
}
