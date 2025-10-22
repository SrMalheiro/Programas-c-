#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3, media;
    cout << "Insira a primeira nota " << endl;
    cin>> n1;
    while (n1<0||n1>20)
    {
    cout << "Valor Invalido! Insira a primeira nota " << endl;
    cin>>n1;
    }
    cout << "Insira a segunda nota" << endl;
    cin>> n2;
      while (n2<0||n2>20)
    {
    cout << "Valor Invalido! Insira a segunda nota " << endl;
    cin>>n2;
    }
    cout << "Insira a terceira nota" << endl;
    cin >> n3;
      while (n3<0||n3>20)
     {
    cout << "Valor Invalido! Insira a terceira nota " << endl;
    cin>>n3;
    }
    media = (n1+n2+n3)/3;
    if (media >9.5)
        cout << "Aprovado com a nota de: " << media << endl;
        else
    if (media >=3)
        cout << "Necessário fazer prova de recuperacao: " << media << endl;
        else
   if (media <3)
        cout << "Nao aprovado: " << media << endl;

    return 0;
}
