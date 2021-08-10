#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
  int dia, mes, ano;
}DataNas;

typedef struct{
  DataNas dataNas;
  int idade;
  char sexo;
  char nome[100];
} Pessoa;

void imprimirPessoa(Pessoa p) {
  cout << endl;
  cout << "Pessoa: " << p.nome;
  cout << "Idade: " << p.idade << endl;
  cout << "Sexo: " << p.sexo << endl;
  cout << "Data de nascimento: " << p.dataNas.dia << "/" << p.dataNas.mes << "/" << p.dataNas.ano << endl;
}

int main() {
  Pessoa pessoa1;

  cout << "Digite o seu nome: ";
  fgets(pessoa1.nome, 100, stdin);

  cout << "Digite a sua idade: ";
  cin >> pessoa1.idade;

  cout << "Digite o seu sexo (f/m): ";
  cin >> pessoa1.sexo;

  cout << "Digite sua data de nascimento no formato dd mm aa: \n";
  cin >> pessoa1.dataNas.dia;
  cin >> pessoa1.dataNas.mes;
  cin >> pessoa1.dataNas.ano;

  imprimirPessoa(pessoa1);

  return 0;

}