#include <iostream>

using namespace std;

float triangulo(float base, float altura){
    float calculo = (base*altura)/2;
    return calculo;
}
float retangulo(float lado1, float lado2){
    float calculo=lado1*lado1;
    return calculo;
}
float circunferencia (float raio){
    float caluco=3.1416*raio*raio;
    return caluco;
}
int main()
{
    int Area;
    int opcao;
    cout << "Para calcular a area de um quadrado/retangulo- 1" << endl;
    cout << "Para calcular a area de um retangulo- 2" << endl;
    cout << "Para calcular a area de um triangulo- 3" << endl;
    cout << "Para calcular a area de um circulo- 4" << endl;
    cin >> opcao;
    switch (opcao){
    case (1):
        {
        cout << "Calculo da area de um quadrado" << endl;
        cout << "Intuduza o valor do lado" << endl;
        float lado << cin;
        Area=retangulo(lado, lado);
        break;
        }
    case (2):
        {
        cout << "Calculo da area de um retangulo" << endl;
        cout << "Intruduza valor da largura" << endl;
        float largura << cin;
        cout << "Intuduza o valor do comprimento ";
        float comprimento<< cin;
        Area=retangulo(largura, comprimento);
        break;
        }
    case (3):
        {
        cout << "Calculo da area de um triangulo" << endl;
        cout << "Intruduza o valor da largura";
        float base<< cin;
        cout << "Intuduza o valor da base ";
        float base<< cin;
        cout << "Intuduza o valor da altura";
        float altura<< cin;
        Area=triangulo(largura, comprimento);
        break;
        }
    case (4):
        {
        cout << "Calculo da area de uma cirgunferencia" << endl;
        cout << "Intruduza o valor do raio";
        float raio << cin;
        cout << "Intuduza o valor da base ";
        Area=circunferencia(raio);
        break;
        }
        default:
        cout << "Opcao invalida " << endl;
    }
    cout << "a area e " << Area;
    return 0;
}
