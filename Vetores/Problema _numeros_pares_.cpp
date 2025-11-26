#include <iostream>
using namespace std;

int main() {
    int N;
    int numeros[10];

  cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

  if (N <= 0 || N > 10) {
        cout << "Quantidade invalida. O valor deve ser entre 1 e 10." << endl;
        return 0;
    }

  for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }

  cout << endl << "NUMEROS PARES:" << endl;

  int contPares = 0;

   for (int i = 0; i < N; i++) {
        if (numeros[i] % 2 == 0) {
            cout << numeros[i] << " ";
            contPares++;
        }
    }

  cout << endl;
  cout << "QUANTIDADE DE PARES = " << contPares << endl;

return 0;
}
