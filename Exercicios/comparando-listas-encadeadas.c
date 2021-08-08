#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct No
{
  int nConteudo;
  struct No *prox;
} TNo;

typedef TNo *TLista;

void liberar_memoria(TLista p);

void verificaPar(TLista p1, TLista p2);

void mostraLista(TLista p1, TLista p2);

int main(void)
{
  TLista pNo1 = NULL;
  TLista pNo2 = NULL;
  TLista pNo3 = NULL;

  TLista pNo4 = NULL;
  TLista pNo5 = NULL;
  TLista pNo6 = NULL;

  pNo1 = (TLista)malloc(sizeof(TLista));
  pNo1->nConteudo = 110;

  pNo2 = (TLista)malloc(sizeof(TLista));
  pNo2->nConteudo = 210;

  pNo3 = (TLista)malloc(sizeof(TLista));
  pNo3->nConteudo = 310;

  pNo4 = (TLista)malloc(sizeof(TLista));
  pNo4->nConteudo = 110;

  pNo5 = (TLista)malloc(sizeof(TLista));
  pNo5->nConteudo = 210;

  pNo6 = (TLista)malloc(sizeof(TLista));
  pNo6->nConteudo = 310;

  pNo1->prox = pNo2;
  pNo2->prox = pNo3;
  pNo3->prox = NULL;

  pNo4->prox = pNo5;
  pNo5->prox = pNo6;
  pNo6->prox = NULL;

  mostraLista(pNo1, pNo4);

  verificaPar(pNo1, pNo4);

  liberar_memoria(pNo1);
  liberar_memoria(pNo4);

  return 0;
}

void liberar_memoria(TLista p)
{
  TLista atual = p;

  while (atual != NULL)
  {
    TLista proximo = atual->prox;

    free(atual);

    atual = proximo;
  }
}

void mostraLista(TLista p1, TLista p2)
{
  TLista i, j;
  printf("\nMostrando a lista:\n");

  if ((p1) && (p2))

    for (i = p1, j = p2; p1 != NULL; p2 = p2->prox, p1 = p1->prox)
    {
      printf("\n%d\t", i->nConteudo);
      printf("- %d\n", j->nConteudo);

      i = i->prox;
      j = j->prox;
    }

  else

    printf("Lista vazia.");

  printf("\n\n");
}

void verificaPar(TLista p1, TLista p2)
{
  TLista i, j, cont = 0;

  if ((p1) && (p2))
  {
    for (i = p1, j = p2; p1 != NULL; p2 = p2->prox, p1 = p1->prox)
    {
      if (i->nConteudo != j->nConteudo)
      {
        printf("NAO SAO IGUAIS - LISTAS DIFERENTES!\n");
        cont = 0;
        break;
      }
      else
      {
        cont++;
      }

      i = i->prox;

      j = j->prox;
    }
    if (cont)
    {
      printf("AS LISTAS SAO IDENTICAS\n");
    }
  }

  else

    printf("LISTAS IDENTICAS PORQUE AMBAS SAO VAZIAS.");
}