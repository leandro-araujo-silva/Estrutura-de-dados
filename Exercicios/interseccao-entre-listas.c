#include <stdio.h>

void intersecao(int A[], int B[], int n) {
  int nao = -10000;
  int cont = 0;

  printf("\n");
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      if (A[i] == B[j] && B[j] != nao) {
        printf("%d\n", A[i]);                     // Ele quer ordenado, colocar em uma array C e depois ordenar esse array
        nao = B[j];
        B[j] = NULL;
        cont++;
      }
    }
  }

  if (cont == 0){
    printf("VAZIO\n");
  } else {
    printf("\n");
  } 
  
}

void leia_vetor(int v[], int n){
  for(int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

int main() {
  int vetA[20], vetB[20];

  leia_vetor(vetA, 5);
  leia_vetor(vetB, 5);
  intersecao(vetA, vetB, 5);

  return 0;
}