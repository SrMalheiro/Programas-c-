#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int soma(int n1, int n2){
    int res;
    res=n1+n2;
    return res;
}

int subtracao(int n1, int n2){
    int res;
    res=n1-n2;
    return res;
}

int divisao(int n1, int n2){
    int res;
    res=n1/n2;
    return res;
}

int multiplicacao(int n1, int n2){
    int res;
    res=n1*n2;
    return res;
}

int raiz(int n1){
    int res;
    res=sqrt(n1);
    return res;
}

int quadrado(int n1){
    int res;
    res=n1^n1;
    return res;
}

int main()
{
    int opcao, n1, n2, res;
    do{
    cout << "Soma!- 1" << endl;
    cout << "Subtração!- 2" << endl;
    cout << "Divisão!- 3" << endl;
    cout << "Multiplicação!- 4" << endl;
    cout << "Raiz quadrada!- 5" << endl;
    cout << "Quadrado!- 6" << endl;
    cout << "Sair!- 7" << endl;
    cin >> opcao;
    switch (opcao){
    case 1:
    {
        cout << "Escreva o 1º número" << endl;
        cin >> n1;
        cout << "Escreva o 2º número" << endl;
        cin >> n2;
        res=soma(n1, n2);
        cout << "O resultado é " << res << endl;
        break;
    }
    case 2:
    {
        cout << "Escreva o 1º número" << endl;
        cin >> n1;
        cout << "Escreva o 2º número" << endl;
        cin >> n2;
        res=subtracao(n1, n2);
        cout << "O resultado é " << res << endl;
        break;
    }
    case 3:
    {
        cout << "Escreva o 1º número" << endl;
        cin >> n1;
        cout << "Escreva o 2º número" << endl;
        cin >> n2;
        res=divisao(n1, n2);
        cout << "O resultado é " << res << endl;
        break;
    }
    case 4:
    {
        cout << "Escreva o 1º número" << endl;
        cin >> n1;
        cout << "Escreva o 2º número" << endl;
        cin >> n2;
        res=multiplicacao(n1, n2);
        cout << "O resultado é " << res << endl;
        break;
    }
    case 5:
    {
        cout << "Escreva o número" << endl;
        cin >> n1;
        res=raiz(n1);
        cout << "O resultado é " << res << endl;
        break;
    }
    case 6:
    {
        cout << "Escreva o 1º número" << endl;
        cin >> n1;
        res=quadrado(n1);
        cout << "O resultado é " << res << endl;
        break;
    }
    case 7:
    {
        return 0;
    }
    }
    }while (opcao==1, 2, 3, 4, 5, 6, 7);
    return 0;
}
