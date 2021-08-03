#include <iostream>
#include <time.h>

using namespace std;

int main() {

  int number[10];

  srand(time(NULL));

  for(int i =0; i < 10; i++) {
    number[i] = rand() % 100;
  }

  cout << endl << "Imprimindo vetor:\n";

  for(int i =0; i < 10; i++) {
    cout << "Number[" << i << "]: " << number[i] << endl;
  }

  return 0;
}