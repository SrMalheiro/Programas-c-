#include <iostream>

using namespace std;

int main()
{
    int n1, F, C;
    cout << "Voc� quer passar graus Fahrenheit para Cent�grados escreva- 1" << endl;
    cout << "Voc� quer passar graus Centigrados para Fahrenheit escreva- 2" << endl;
    cin >> n1;
    if (n1==1){
        cout << "Quantos graus Fahrenheit est�o atualmente a fazer?" << endl;
    cin >> F;
    C=(9/F-160)*5;
    cout << "Est�o a fazer em graus Centigrados: " << C << endl;
    }
    else{
        cout << "Quantos graus Centigrados est�o atualmente a fazer?" << endl;
    cin >> C;
    F=(9*C+160)/5;
    cout << "Est�o a fazer em graus Fahrenheit: " << F << endl;
    }
    return 0;
}
