#include <iostream>

using namespace std;

int main()
{
    int idade, m50=0, i,perc2;
    float altura, peso, ma=0;
	for (i = 1; i < 26; i++)
	{
		cout << "Qual a idade?" << endl;
		cin >> idade;
		cout << "Qual a altura?" << endl;
		cin >> altura;
		cout << "Qual o peso?" << endl;
		cin >> peso;
		if (idade>50){
            m50=m50+1;}
        if (idade>=10 && idade<=40){
            ma=(ma+altura)/i;}
        if (peso<40){
            perc =(perc+1)*0.100;}
	}
	cout << "Pessoas com idade superior a 50: " << m50 << endl;
	cout << "Média de alturas com idade entre 10 e 40: " << ma << endl;
	cout << "Percentagem de pessoas" << perc << endl;
    return 0;
}
