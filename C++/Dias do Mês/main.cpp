#include <iostream>

using namespace std;

int main()
{
    int mes;
    cout << "Insira o número do mês: (1 a 12)";
    cin >> mes;
    switch (mes){
    case (1):
        {
        cout << "o mes " << mes << " tem 31 dias" << endl;
        break;
        }
    case (2):
        {
        cout << " o mes " << mes << " tem 28 ou 29 dias " << endl;
        break;
        }
    case (3):
        {
        cout << "o mes " << mes << " tem 31 dias" << endl;
        break;
        }
    case (4):
        {
        cout << "o mes " << mes << " tem 30 dias" << endl;
        break;
        }
    case (5):
        {
        cout << "o mes " << mes << " tem 31 dias" << endl;
        break;
        }
    case (6):
        {
        cout << "o mes" << mes << "tem 30 dias" << endl;
        break;
        }
    case (7):
        {
        cout << "o mes " << mes << " tem 31 dias" << endl;
        break;
        }
    case (8):
        {
        cout << "o mes " << mes << " tem 31 dias" << endl;
        break;
        }
    case (9):
        {
        cout << "o mes " << mes << " tem 30 dias" << endl;
        break;
        }
    case (10):
        {
        cout << "o mes " << mes << " tem 31 dias" << endl;
        break;
        }
    case (11):
        {
        cout << "o mes " << mes << " tem 300 dias" << endl;
        break;
        }
    case (12):
        {
        cout << "o mes " << mes << " tem 31 dias" << endl;
        break;
        }
    }
    return 0;
}
