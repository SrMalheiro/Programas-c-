#include <iostream>

using namespace std;

int main()
{
    int n1, n2, i;
    float media1=0, media=0;
    cout << "Quantos alunos tem a turma?" << endl;
    cin >> n1;
	for (i = 1; i < n1+1; i++)
	{
		cout << "Escreva a idade do aluno " << i << endl;
		cin >> n2;
		media1=media1+n2;
	}
    media = media1/n1;
    cout << "A média da idade dos alunos é " << media << " anos" << endl;
    return 0;
}
