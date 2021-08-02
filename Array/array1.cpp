#include <iostream>

using namespace std;

int main() {
  int vetor[10];

  for(int i=0; i < 10; i++) {
    cout << "Valor[" << i+1 << "]: ";
    cin >> vetor[i];
  }

  cout << "\nImprimindo vetor:\n";

  for (int i=0; i < 10; i++) {
    cout << "Valor[" << i << "]: " << vetor[i] << endl;
  }

  return 0;
}