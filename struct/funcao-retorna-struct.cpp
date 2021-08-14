#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
  int dia, mes, ano;
}DataNas;

typedef struct {
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

// Função que ler os dados de uma pessoa e retorna para quem chamou

Pessoa ler_pessoa(){
  Pessoa p;

  cout << "Digite o seu nome: ";
  fgets(p.nome, 100, stdin);

  cout << "Digite a sua idade: ";
  cin >> p.idade;

  cout << "Digite o seu sexo (f/m): ";
  cin >> p.sexo;

  cout << "Digite sua data de nascimento no formato dd mm aa:" << endl;
  cin >> p.dataNas.dia;
  cin >> p.dataNas.mes;
  cin >> p.dataNas.ano;

  return p;
}

int main() {
  Pessoa pessoa;
  pessoa = ler_pessoa();
  imprimirPessoa(pessoa);

  return 0;
}