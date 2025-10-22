#include <iostream>

using namespace std;

int main()
{
    int quandosnum;
    float numero, soma,media;
    cout << "Quantos numeros para fazer a media?" << endl;
    cin >> quandosnum;
    for(int i=1;i<=quandosnum; i++)
        {
        cout << "Intruduza o numero " << i << " de " << quandosnum << endl;
        cin >>numero;
        soma+=numero;
    }

    media=soma/quandosnum;
     cout << "A media e " << media << endl;
    return 0;
}
