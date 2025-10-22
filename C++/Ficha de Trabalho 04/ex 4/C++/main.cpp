#include <iostream>

using namespace std;

int main()
{
    int vvia, vmax, vm, n1;
    cout << "Qual a velocidade de circulação máxima da via?" << endl;
    cin >> vvia;
    cout << "Qual a velocidade do motorista?" << endl;
    cin >> vmax;
    vm = vmax-vvia;
    if (vm>=1 && vm<=10){
            cout << "O motorista ia " << vm << " km/h acima do permitido!" << endl;
            cout << "A multa será de 50 euros!" << endl;
    }
    if (vm>=11 && vm<=30){
            cout << "O motorista ia " << vm << " km/h acima do permitido!" << endl;
            cout << "A multa será de 100 euros!" << endl;
    }
    if (vm>=31){
            cout << "O motorista ia " << vm << " km/h acima do permitido!" << endl;
            cout << "A multa será de 200 euros!" << endl;
    }
    if (vm<=0){
            cout << "O motorista ia dentro do limite permitido!" << endl;}
    cout << "Quer repetir? Sim- 1 ou Não-2!" << endl;
    cin >> n1;
    if (n1==1){
    cout << "Qual a velocidade de circulação máxima da via?" << endl;
    cin >> vvia;
    cout << "Qual a velocidade do motorista?" << endl;
    cin >> vmax;
    vm = vmax-vvia;
    if (vm>=1 && vm<=10){
            cout << "O motorista ia " << vm << " km/h acima do permitido!" << endl;
            cout << "A multa será de 50 euros!" << endl;
    }
    if (vm>=11 && vm<=30){
            cout << "O motorista ia " << vm << " km/h acima do permitido!" << endl;
            cout << "A multa será de 100 euros!" << endl;
    }
    if (vm>=31){
            cout << "O motorista ia " << vm << " km/h acima do permitido!" << endl;
            cout << "A multa será de 200 euros!" << endl;
    }
    if (vm<=0){
            cout << "O motorista ia dentro do limite permitido!" << endl;}
    }
    else
        cout << "Clique em Enter para fechar o programa!!" << endl;
    return 0;
}
