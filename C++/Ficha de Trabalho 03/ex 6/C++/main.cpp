#include <iostream>

using namespace std;

int main()
{
	int i, n1, soma=0;
	for (i = 0; i < 10; i++)
        {
        cout << "Insira dez números" << endl;
        cin >> n1;
        if (n1%2==0)
            soma=n1+soma;
        }
        cout << soma << endl;
    return 0;
}
