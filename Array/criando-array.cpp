#include <iostream>

using namespace std;

int main() {
  int idade;
  char sexo;
  float n1;

  int num1[10];
  int num2[] = {1,5,9,15,43};
  int num3[5] = {4,7,5};
  int num4[5] = {1,2,3,4,5};
  int num5[5] = {0};

  char letras[100];
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

  float notas[3] = {7.5,8.3,9.5};

  for (int i = 0; i < 5; i++) {
    cout << num2[i] << endl;
  }

  return 0;

}