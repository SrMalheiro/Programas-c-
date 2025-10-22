#include <iostream>

using namespace std;

int main()
{
    float IMC, peso, altura;
    string nome;
    cout << "Qual o nome de quem vamos calcular o IMC?" << endl;
    cin >> nome;
    cout << "Quanto pesa?" << endl;
    cin >> peso;
    cout << "Qual a altura?" << endl;
    cin >> altura;
    IMC=peso/(altura*altura);
    if (IMC<=18.5){
            cout << "Abaixo do peso, porque o IMC de " <<nome<< " é: " << IMC << endl;}
    if (IMC>=18.6 && IMC<=24.9){
            cout << "Peso Ideal, porque o IMC de " <<nome<< " é: " << IMC << endl;}
    if (IMC>=25.0 && IMC<=29.9){
            cout << "Levemente acima do peso (parabéns), porque o IMC de " <<nome<< " é: " << IMC << endl;}
    if (IMC>=30.0 && IMC<=34.9){
            cout << "Obesidade Grau 1, porque o IMC de " <<nome<< " é: " << IMC << endl;}
    if (IMC>=35.0 && IMC<=39.9){
            cout << "Obesidade Grau 2 (severa), porque o IMC de " <<nome<< " é: " << IMC << endl;}
    if (IMC>=40){
            cout << "Obesidade Grau 3 (mórbida), porque o IMC de " <<nome<< " é: " << IMC << endl;}
    return 0;
}
