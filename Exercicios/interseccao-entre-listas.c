#include <stdio.h>

void imprimir(int c[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", c[i]);
  }
}

void ordenacaoA(int C[], int n) {
  int aux;

  for (int contador = 1; contador < n; contador++)
  {
    for (int t = 0; t < n; t++)
    {
      if (C[t] > C[t + 1])
      {
        aux = C[t];
        C[t] = C[t + 1];
        C[t + 1] = aux;
      }
    }
  }

  imprimir(C, n);
}

void ordenacao(int C[], int n)
{
  int aux;

  for (int contador = 1; contador < n; contador++)
  {
    for (int t = 0; t < n; t++)
    {
      if (C[t] > C[t + 1])
      {
        aux = C[t];
        C[t] = C[t + 1];
        C[t + 1] = aux;
      }
    }
  }

  ordenacaoA(C, n);
  //imprimir(C, n);
}

void intersecao(int A[], int B[], int n)
{
  int nao;
  int cont = 0;
  int C[20];

  //printf("\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (A[i] == B[j] && B[j] != nao)
      {
        C[cont] = A[i]; // Ele quer ordenado, colocar em uma array C e depois ordenar esse array
        nao = B[j];
        B[j] = NULL;
        cont++;
      }
    }
  }

  if (cont == 0)
  {
    printf("VAZIO\n");
  }
  else
  {
    ordenacao(C, cont);
  }
}

void leia_vetor(int v[], int n)
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
  }
}

int main()
{
  int vetA[25], vetB[25];

  leia_vetor(vetA, 5);
  leia_vetor(vetB, 5);
  intersecao(vetA, vetB, 5);

  return 0;
}