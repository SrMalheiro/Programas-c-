#include <iostream>

using namespace std;

int main()
{
    float m1, m2, a, pi=3.14;
    int n1;
    cout << "Para calcular a area de um quadrado/retangulo- 1" << endl;
    cout << "Para calcular a area de um triangulo- 2" << endl;
    cout << "Para calcular a area de um circulo- 3" << endl;
    cout << "Sair- 4" << endl;
    cin >> n1;
    switch (n1){
    case (1):
        {
        cout << "Insira a medida de um lado!" << endl;
        cin >> m1;
        cout << "Insira a medida de outro lado!" << endl;
        cin >> m2;
        a=m1*m2;
        cout << "A area do quadrado ou retangulo e " << a << endl;
        break;
        }
    case (2):
        {
        cout << "Insira a medida da base!" << endl;
        cin >> m1;
        cout << "Insira a medida da altura!" << endl;
        cin >> m2;
        a=(m1*m2)/2;
        cout << "A area do triangulo e " << a << endl;
        break;
        }
    case (3):
        {
        cout << "Insira a medida do raio!" << endl;
        cin >> m1;
        a=pi*(m1*m1);
        cout << "A area do circulo e " << a << endl;
        break;
        }
    case (4):
        {
        cout << "Para sair clique na tecla [enter]!" << endl;
        break;
        }
    }
    return 0;
}
