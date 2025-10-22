#include <iostream>

using namespace std;

int main()
{
    int n1, lB, lA;
    float area, preco, pm, m;
    cout << "Identifique o preço do terreno" << endl;
    cin >> preco;
    cout << "Insira o lado [a] do terreno" << endl;
    cin >> lA;
    cout << "Insira o lado [b] do terreno" << endl;
    cin >> lB;
    area = (lA*lB);
    m = (area*preco);
    pm = (area/preco);
    if (m >= pm)
        cout << "Pagou abaixo do preco medio";
    else
        cout << "Pagou acima do preco medio";
    return 0;

}
