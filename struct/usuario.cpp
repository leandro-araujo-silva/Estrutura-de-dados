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

  cout << endl;
  cout << "Pessoa: " << pessoa1.nome;
  cout << "Idade: " << pessoa1.idade << endl;
  cout << "Sexo: " << pessoa1.sexo << endl;
  cout << "Data de nascimento: " << pessoa1.dataNas.dia << "/" << pessoa1.dataNas.mes << "/" << pessoa1.dataNas.ano << endl;

  return 0;

}