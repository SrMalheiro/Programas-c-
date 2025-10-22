#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float c1, c2, h1, h2;
    cout << "Insira o cateto 1" << endl;
    cin>> c1;
    cout << "Insira o cateto 2" << endl;
    cin >> c2;
    h1 = ((c1*c1)+(c2*c2));
    h2 = sqrt (h1);
    cout << "A hipotenusa e: " << h2;
        return 0;
}
