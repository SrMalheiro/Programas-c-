#include <iostream>

using namespace std;

int main()
{   int n1, n2, n3;
    cout << "Insira um numero" << endl;
    cin>> n1;
    cout << "Insira um numero" << endl;
    cin >> n2;
    n3=n1-n2;
    if (n3==0)
        cout << "Os numeros sao iguais" << endl;
        else
            cout << "Os numeros sao diferentes" << endl;
    return 0;
}
