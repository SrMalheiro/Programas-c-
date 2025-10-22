#include <iostream>

using namespace std;

int main()
{
    int n1;
    float resto, par;
    float impar;
    cout<< "Insira o numero" << endl;
    cin >> n1;
    resto=n1%2;
    if (resto==0)
     cout << "Numero par"<< endl;
    else
    cout << "Numero impar" << endl;
    return 0;
}
