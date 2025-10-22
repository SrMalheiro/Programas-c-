#include <iostream>

using namespace std;

int main()
{
    int n1;
    float n2, escalao;
    cout << "Escreva 1 se gastou 0 && 220 kWh" << endl;
    cout << "Escreva 2 se gastou 221 && 500 kWh" << endl;
    cout << "Escreva 3 se gastou 501 && 1.000 kWh" << endl;
    cout << "Escreva 4 se gastou 1.001 && 10.00 kWh" << endl;
    cin >> n1;
    switch (n1)
    {
    case (1):
    {
        cout << "Quantos kWs gastou este mes?" << endl;
        cin >> n2;
        escalao = (n2*0.566)+2.07;
        cout << "o valor a pagar e de: " << escalao << endl;
        break;
    }
    case (2):
    {
        cout << "Quantos kWs gastou este mes?" << endl;
        cin >> n2;
        escalao = (220*0.566)+((n2-220)*0.0528)+2.82;
        cout << "o valor a pagar e de:" << escalao << endl;
        break;
    }
    case (3):
    {
        cout << "Quantos kWs gastou este mes?" << endl;
        cin >> n2;
        escalao = (220*0.566)+(279*0.0529)+((n2-500)*0.0489)+4.08;
        cout << "o valor a pagar e de:" << escalao << endl;
        break;
    }
    case (4):
    {
        cout << "Quantos kWs gastou este mes?" << endl;
        cin >> n2;
        escalao = (220*0.566)+(279*0.0529)+(280*0.0489)+((n2-1000)*0.0484)+4.48;
        cout << "o valor a pagar e de:" << escalao << endl;
        break;
    }
    return 0;
    }
}
