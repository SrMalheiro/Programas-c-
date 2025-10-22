#include <cstdlib>
#include <iostream>

using namespace std;

int IMCorporal(float p, float a){
    float IMC;
    IMC=p/(a*a);
    return IMC;
}

int main()
{
    float IMC=0, p, a;
    cout <<"Insira o seu peso" << endl;
    cin >> p;
    cout <<"Insira a sua altura" << endl;
    cin >> a;
    IMC=IMCorporal(p,a);
    if (IMC<18.5)
        cout <<"Abaixo de peso" << endl;
        if (IMC>=18.5 && IMC<24.9)
        cout << "Peso normal" << endl;
            if (IMC>=25 && IMC< 29.9)
            cout << "Sobrepeso" << endl;
                if (IMC>30 && IMC< 34.9)
                cout << "Obesidade grau 1" << endl;
                    if (IMC>35)
                    cout << "Obesidade grau 2" << endl;

    return 0;
}
