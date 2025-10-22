#include <iostream>
using namespace std;

int main()
{
	int opcao,n1,n2,t;

	cout << "Insira o primeiro numero" << endl;
	cin >> n1;
	cout << "Insira o segundo numero" << endl;
	cin >> n2;
	cout << "Menu" << endl;
	cout << "Opcao 1 - Somar" << endl;
	cout << "Opcao 2 - Subtrair" << endl;
	cout << "Opcao 3 - Multiplicar" << endl;
	cout << "Opcao 4 - Dividir" << endl;
	cin >> opcao;
	switch (opcao) {
	case (1):
	{
		t = n1 + n2;
		cout << "A soma dos numeros e: " << t << endl;
		break;
	}
	case (2):
	{
		t = n1 - n2;
		cout << "A subtracao dos numeros e: " << t << endl;
		break;
	}
	case (3):
	{
		t = n1 * n2;
		cout << "A multiplicacao dos numeros e: " << t << endl;
		break;
	}
	case (4):
	{
		if (n1 > n2)
			cout << "A divisao dos numeros:" << n1 / n2 << endl;
		else
			cout << "A divisao dos numeros:" << n2 / n1 << endl;
		break;
	}
	}
}
