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
    cout << "Escreva o 1º número!" << endl;
    cin >> a;
    cout << "Escreva o 2º número!" << endl;
    cin >> b;
    c=soma(a, b);
    cout << "A soma do número " << a << " com o número " << b << " é de " << c << endl;
    return 0;
}
