#include <iostream>

using namespace std;

int main()
{
    string a1;
    float n1, n2, n3, mn;
    cout << "Insira o Nome do Aluno!" << endl;
    cin >> a1;
    cout << "Insira o valor da Primeira Nota!" << endl;
    cin >> n1;
    cout << "Insira o valor da Segunda Nota!" << endl;
    cin >> n2;
    cout << "Insira o valor da Terceira Nota!" << endl;
    cin >> n3;
    mn=(n1*0.20)+(n2*0.40)+(n3*0.40);
    cout << "A média das notas do aluno " << a1 << " é equivalente a: " << mn;
    return 0;
}
