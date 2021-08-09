#include <iostream>
#include <string.h>

using namespace std;

typedef struct{
  int idade;
  char sexo;
  char nome[100];
} Pessoa;


struct Pessoa2 {
  int idade;
  char sexo;
  char nome[100];
};

int main() {
  Pessoa pessoa1;
  struct Pessoa2 pessoa2;

  pessoa1.idade = 35;
  pessoa1.sexo = 'f';
  strcpy(pessoa1.nome,"Maria");

  cout << "Pessoa: " << pessoa1.nome << endl;
  cout << "Idade: " << pessoa1.idade << endl;
  cout << "Sexo: " << pessoa1.sexo << endl;

  return 0;

}



