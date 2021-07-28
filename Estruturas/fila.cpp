#include <iostream>

using namespace std;

typedef int TipoItem;
const int max_itens = 100;

class fila
{
private:
  int primeiro, ultimo;
  TipoItem *estrutura;

public:
  fila();
  ~fila();
  bool estavazio();
  bool estacheio();
  void inserir(TipoItem item);
  TipoItem remover();
  void imprimir();
};

fila::fila()  // construtor
{
  primeiro = 0;
  ultimo = 0;
  estrutura = new TipoItem[max_itens];
}

fila::~fila()  // destrutor
{
  delete [] estrutura;
}

bool fila::estavazio()
{
  return (primeiro == ultimo);
}

bool fila::estacheio()
{
  return (ultimo-primeiro == max_itens);
}

void fila::inserir(TipoItem item)
{
  if (estacheio()) {
    cout << "A fila esta cheia\n";
    cout << "Esse elemento nao pode ser inserido";
  } else {
    estrutura[ultimo % max_itens] = item;
    ultimo++;
  }
}

TipoItem fila::remover()
{
}

void fila::imprimir()
{
}
