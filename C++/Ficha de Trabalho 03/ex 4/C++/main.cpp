#include <iostream>

using namespace std;

int main()
{
    float n1, L, K;
    cout << "Quer converter libras para kilos? Escreva- 1" << endl;
    cout << "Quer converter kilos para libras? Escreva- 2" << endl;
    cin >> n1;
    if (n1==1){
        cout << "Quantas libras quer converter?" << endl;
    cin >> L;
    K=L/2.2;
    cout << "Você tem " << K << " kilos" << endl;}
    else{
        cout << "Quantos kilos quer converter?" << endl;
    cin >> K;
    L=K*2.2;
    cout << "Você tem " << L << " libras" << endl;}
    return 0;
}
