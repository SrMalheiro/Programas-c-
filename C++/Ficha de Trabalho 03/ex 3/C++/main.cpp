#include <iostream>

using namespace std;

int main()
{
    int n1, F, C;
    cout << "Você quer passar graus Fahrenheit para Centígrados escreva- 1" << endl;
    cout << "Você quer passar graus Centigrados para Fahrenheit escreva- 2" << endl;
    cin >> n1;
    if (n1==1){
        cout << "Quantos graus Fahrenheit estão atualmente a fazer?" << endl;
    cin >> F;
    C=(9/F-160)*5;
    cout << "Estão a fazer em graus Centigrados: " << C << endl;
    }
    else{
        cout << "Quantos graus Centigrados estão atualmente a fazer?" << endl;
    cin >> C;
    F=(9*C+160)/5;
    cout << "Estão a fazer em graus Fahrenheit: " << F << endl;
    }
    return 0;
}
