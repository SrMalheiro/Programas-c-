#include <iostream>
#include <cstdlib>

using namespace std;

int soma(int a, int b){
    int c;
    c=a+b;
    return c;
}

int main()
{
    float a, b, c;
    cout << "Vamos fazer uma soma, IHI!" << endl;
    cout << "Escreva o 1� n�mero!" << endl;
    cin >> a;
    cout << "Escreva o 2� n�mero!" << endl;
    cin >> b;
    c=soma(a, b);
    cout << "A soma do n�mero " << a << " com o n�mero " << b << " � de " << c << endl;
    return 0;
}
