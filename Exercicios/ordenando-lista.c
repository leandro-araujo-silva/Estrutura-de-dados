#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
  int valor;
  struct no *proximo;
} No;

// Procedimento para inserir no início
void inserir_no_inicio(No **lista, int num)
{
  No *novo = malloc(sizeof(No));

  if (novo)
  {
    novo->valor = num;
    novo->proximo = *lista;
    *lista = novo;
  }
  else
  {
    printf("Erro ao alocar memoria!\n");
  }
}

// Procedimento para inserir no fim
void inserir_no_fim(No **lista, int num)
{
  No *aux, *novo = malloc(sizeof(No));

  if (novo)
  {
    novo->valor = num;
    novo->proximo = NULL;

    // É o primeiro?
    if (*lista == NULL)
    {
      *lista = novo;
    }
    else
    {
      aux = *lista;
      while (aux->proximo)
      {
        aux = aux->proximo;
      }
      aux->proximo = novo;
    }
  }
  else
  {
    printf("Erro ao alocar memoria!\n");
  }
}

// Procedimento para inserir no meio
void inserir_no_meio(No **lista, int num, int ant)
{
  No *aux, *novo = malloc(sizeof(No));

  if (novo)
  {
    novo->valor = num;

    // É o primeiro?
    if (*lista == NULL)
    {
      novo->proximo = NULL;
      *lista = novo;
    }
    else
    {
      aux = *lista;
      while (aux->valor != ant && aux->proximo)
      {
        aux = aux->proximo;
      }
      novo->proximo = aux->proximo;
      aux->proximo = novo;
    }
  }
  else
  {
    printf("Erro ao alocar memoria!\n");
  }
}

void inserir_ordenado(No **lista, int num) {
  No *aux, *novo = malloc(sizeof(No));

  if(novo) {
    novo->valor = num;
    // A lista está vazia?
    if(*lista == NULL){
      novo->proximo = NULL;
      *lista = novo;
    } // É o menor?
    else if(novo->valor < (*lista)->valor) {
      novo->proximo = *lista;
      *lista = novo;
    } else {
      aux = *lista;
      while(aux->proximo && novo->valor > aux->proximo->valor) {
        aux = aux->proximo;
      }
      novo->proximo = aux->proximo;
      aux->proximo = novo;
    }
  } else {
    printf("Erro ao alocar memoria!\n");
  }
}

// Imprimindo lista
void imprimir(No *no)
{
  printf("\nLista: ");
  while (no)
  {
    printf("%d ", no->valor);
    no = no->proximo;
  }
  printf("\n\n");
}

int main()
{
  int valor;
  No *lista = NULL;
      
  while (scanf("%d", &valor)!=EOF) {
    inserir_ordenado(&lista, valor);
  }  

  imprimir(lista);
  
  return 0;
}