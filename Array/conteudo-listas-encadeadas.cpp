#include <iostream>

using namespace std;

int main() {
  int vet1[10000];
  int vet2[10000];
  int n1, n2, cont = 0;

  cin >> n1;
  
  for (int i =0; i < n1; i++) {
    cin >> vet1[i];
  }

  cin >> n2;

  for (int i =0; i < n2; i++) {
    cin >> vet2[i];
  }

  if(n1 >= n2) {
    for (int i =0; i < n2; i++) {
      if(vet1[i]==vet2[i]) {
        cout << "1\n";

        return 0;
      }
    }

    cout << "0\n";
  } else {
    cout << "0\n";
  }

  return 0;
}