#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4;
    cout <<"insira um numero" << endl;
    cin >> n1;
    cout << "insira um numero" << endl;
    cin >> n2;
    n3 =(n1+n2);
    cout<<"a soma dos numeros e :"<<n3<< endl;
        n4 = n3%2;
    if (n4==0)
    cout << "numero par" << endl;
    else
    cout << "numero impar" << endl;
    if(n1>n2)
        cout <<n1<<" e maior que  "<<n2<<endl;
    else
        if(n2>n1)
            cout <<n2<<" e maior que  "<<n1<<endl;
        else
            cout << "Sao iguais"<<endl;
    return 0;
}
