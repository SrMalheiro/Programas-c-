#include <iostream>

using namespace std;

int main()
{
    float P,B, total, PP,PB,PT,PD;
    cout << "Quando paes vendou?" << endl;
    cin >> P;
    cout << "Quandas broas vendeu?" << endl;
    cin >> B;
    total=P+B;
    PP=P*0.15;
    PB=B*1.00;
    PT=PB+PP;
    PD=PT*0.10;
    cout << "O pao rendeu-lhe: " << PP << "€" << endl;
    cout << "A broa rendeu-lhe: " << PB << "€" << endl;
    cout << "No total ganhou: " << PT<< "€" << endl;
    cout << "Voce deve guardar: " << PD << "€" << endl;
    return 0;
}
