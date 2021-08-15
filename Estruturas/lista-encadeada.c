#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int valor;
  struct no *proximo;
}No;

// Procedimento para inserir no início
void inserir_no_inicio(No **lista, int num) {
  No *novo = malloc(sizeof(No));

  if (novo) {
    novo->valor = num;
    novo->proximo = *lista;
    *lista = novo;
  } else {
    printf("Erro ao alocar memoria!\n");
  }
}

// Procedimento para inserir no fim
void inserir_no_fim(No **lista, int num) {
  No *aux, *novo = malloc(sizeof(No));

  if(novo) {
    novo->valor = num;
    novo->proximo = NULL;

    // É o primeiro?
    if(*lista == NULL){
      *lista = novo;
    } else {
      aux = *lista;
      while(aux->proximo) {
        aux = aux->proximo;
      }
      aux->proximo = novo;
    }
  } else {
    printf("Erro ao alocar memoria!\n");
  } 
}

int main() {

}