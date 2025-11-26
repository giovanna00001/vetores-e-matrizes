#include <iostream>
using namespace std;

int main() {
    int N;
    int A[10], B[10], C[10]; 

  cout << "Quantos valores vai ter cada vetor? ";
   cin >> N;

   if (N <= 0 || N > 10) {
       cout << "Quantidade invalida. O valor deve ser entre 1 e 10." << endl;
       return 0;
    }

  cout << "Digite os valores do vetor A:" << endl;
   for (int i = 0; i < N; i++) {
       cin >> A[i];
    }

   cout << "Digite os valores do vetor B:" << endl;
   for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

  for (int i = 0; i < N; i++) {
       C[i] = A[i] + B[i];
    }

  cout << "VETOR RESULTANTE:" << endl;
  for (int i = 0; i < N; i++) {
      cout << C[i] << endl;
    }

return 0;
}
