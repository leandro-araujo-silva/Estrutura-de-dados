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

void inserir_ordenado(No **lista, int num)
{
  No *aux, *novo = malloc(sizeof(No));

  if (novo)
  {
    novo->valor = num;
    // A lista está vazia?
    if (*lista == NULL)
    {
      novo->proximo = NULL;
      *lista = novo;
    } // É o menor?
    else if (novo->valor < (*lista)->valor)
    {
      novo->proximo = *lista;
      *lista = novo;
    }
    else
    {
      aux = *lista;
      while (aux->proximo && novo->valor > aux->proximo->valor)
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

// Procedimento para remover nó da lista
No *remover(No **lista, int num)
{
  No *aux, *remover = NULL;

  if (*lista)
  {
    if ((*lista)->valor == num)
    {
      remover = *lista;
      *lista = remover->proximo;
    }
    else
    {
      aux = *lista;
      while (aux->proximo && aux->proximo->valor != num)
      {
        aux = aux->proximo;
      }
      if (aux->proximo)
      {
        remover = aux->proximo;
        aux->proximo = remover->proximo;
      }
    }
  }
  return remover;
}

// Procedimento para buscar elemento
No *buscar(No **lista, int num)
{
  No *aux, *no = NULL;

  aux = *lista;
  while (aux && aux->valor != num)
  {
    aux = aux->proximo;
  }
  if (aux)
  {
    no = aux;
  }
  return no;
}

// Copiar lista
void copiar_lista(No **l, No **C)
{
  No *aux = *l;
  while (aux)
  {
    inserir_no_inicio(C, aux->valor);
    aux = aux->proximo;
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
  int opcao, valor, anterior;
  No *removido, *buscado, *lista = NULL;
  No *A, *B, *C;
  A = NULL;
  B = NULL;
  C = NULL;

  do
  {
    printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - InserirO\n\t5 - Remover\n\t6 - Imprimir\n\t7 - Buscar elemento\n\t8 - Copiar\n");
    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:
      printf("Digite um valor: ");
      scanf("%d", &valor);
      inserir_no_inicio(&A, valor);

      printf("Digite um valor: ");
      scanf("%d", &valor);
      inserir_no_inicio(&B, valor);
      break;

    case 2:
      printf("Digite um valor: ");
      scanf("%d", &valor);
      inserir_no_fim(&A, valor);
      break;

    case 3:
      printf("Digite um valor e o valor de referencia: ");
      scanf("%d%d", &valor, &anterior);
      inserir_no_meio(&B, valor, anterior);
      break;

    case 4:
      printf("Digite um valor:");
      scanf("%d", &valor);
      inserir_ordenado(&A, valor);
      break;

    case 5:
      printf("Digite um valor a ser removido: ");
      scanf("%d", &valor);
      removido = remover(&C, valor);
      if (removido)
      {
        printf("Elemento removido: %d\n", removido->valor);
        free(removido);
      }
      else
      {
        printf("Elemento inexistente!\n");
      }
      break;

    case 6:
      printf("\nLista A:\n");
      imprimir(A);
      printf("\nLista B:\n");
      imprimir(B);
      printf("\nLista C:\n");
      imprimir(C);
      break;

    case 7:
      printf("Digite um valor a ser buscado: ");
      scanf("%d", &valor);
      buscado = buscar(&C, valor);
      if (buscado)
      {
        printf("Elemento encontrado: %d\n", buscado->valor);
      }
      else
      {
        printf("Elemento nao encontrado!\n");
      }
      break;

    case 8:
      copiar_lista(&A, &C);
      copiar_lista(&B, &C);
      break;

    default:
      if (opcao != 0)
      {
        printf("Opcao invalida!\n");
      }
    }
  } while (opcao != 0);

  return 0;
}