#include <iostream>

using namespace std;

int main()
{
    int n1, n2, P;
    cout << "Quanto custa a gasolina?" << endl;
    cin >> n1;
    cout << "Quanto e que pagou?" << endl;
    cin >> n2;
    P=(n2/n1);
    cout << "Com " <<n2 << "euros abesteceu " << P << "litros" << endl;
    return 0;
}
