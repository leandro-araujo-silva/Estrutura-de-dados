#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
  char tipo[100];
  char marca[50];
  char modelo[25];
  char energia;
  char descricao[500];
  int quantidade;
  int codigo;
} Eletronico;

void imprimirEletronico(Eletronico e) {
  cout << "Tipo: " << e.tipo << endl;
  cout << "Marca: " << e.marca << endl;
  cout << "Modelo: " << e.modelo << endl;
  cout << "Energia: " << e.energia << endl;
  cout << "Descricao: " << e.descricao << endl; 
}

// Função que ler os dados de uma pessoa e retorna para quem chamou

Eletronico lerEletronico(){
  Eletronico e;
  
  cout << "Digite o tipo do eletronico: ";
  fgets(e.tipo, 100, stdin);
  cout << "Marca: ";
  fgets(e.marca, 50, stdin);
  cout << "Modelo: ";
  fgets(e.modelo, 25, stdin);
  cout << "Eficiencia energetica: ";
  cin >> e.energia;
  setbuf(stdin, NULL);
  cout << "Descricao: ";
  fgets(e.descricao, 500, stdin);
  cout << "Quantidade: ";
  cin >> e.codigo;
  cout << "Codigo: ";
  cin >> e.codigo;

  return e;
}

int main() {
  Eletronico ele;

  ele = lerEletronico();
  cout << endl;
  imprimirEletronico(ele);

  return 0;
}