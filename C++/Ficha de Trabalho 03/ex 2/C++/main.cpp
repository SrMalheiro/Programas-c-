#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Qual o pre�o do produto sem IVA!" << endl;
    cin >> n1;
    n2=n1*1.23;
    cout << "Voc� ir� pagar com IVA: " << n2;
    cout << "�" << endl;
    return 0;
}
