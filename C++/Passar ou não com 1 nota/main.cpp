#include <iostream>

using namespace std;

int main()
{
    float n1;
    cout << "Insira a nota" << endl;
    cin >> n1;
    if (n1 >= 9.5)
        cout << "Aprovado com a nota: " << n1 << endl;
    else
        cout << "Nao aprovado, com a nota: " << n1 << endl;
    return 0;
}
