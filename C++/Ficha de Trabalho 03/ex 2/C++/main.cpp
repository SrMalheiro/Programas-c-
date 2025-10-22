#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Qual o preço do produto sem IVA!" << endl;
    cin >> n1;
    n2=n1*1.23;
    cout << "Você irá pagar com IVA: " << n2;
    cout << "€" << endl;
    return 0;
}
