#include <iostream>

using namespace std;

int main() {
  int vet1[20];
  int vet2[20];
  int cont = 0;

  for(int i =0; i < 20; i++) {
    cin >> vet1[i];
  }

  for (int i =0; i < 20; i++) {
    cin >> vet2[i];
  }

  for (int i =0; i < 20; i++) {
    for(int j = 0; j < 20; j++)
    if (vet1[i] == vet2[j]) {
      cout << vet1[i] << endl; 
      cont++;
    }
  }

  if(cont == 0) {
    cout << "VAZIO\n";
  }

  return 0;
}