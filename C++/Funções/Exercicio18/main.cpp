#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
struct Aluno
{
char nome[255];
char endereco[300];
int idade, telefone;
} alu1;
cout<<"\n Registo - Aluno 1: ";
cout<<"\n Insira o nome: ";
gets(alu1.nome);
cout<<"\n Insira o endereco: ";
gets(alu1.endereco);
cout<<"\n Insira a idade: ";
cin>>alu1.idade;
cout<<"\n Insira o telefone: ";
cin>>alu1. telefone;
cout<<"\n************* Registo realizado *************";
cout<<"\nAluno1 ";
cout<<"\nNome: "<<alu1.nome;
cout<<"\nIdade: "<<alu1.idade;
cout<<"\nTelefone: "<<alu1.telefone;
cout<<"\nEndereco: "<<alu1.endereco;
cout<<"\nFim do programa!";
system("PAUSE");
return EXIT_SUCCESS;
}
