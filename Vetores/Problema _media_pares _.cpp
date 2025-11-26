#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    int numeros[10];
    int somaPares = 0;
    int contPares = 0;

   cout << "Quantos elementos vai ter o vetor? ";
   cin >> N;

   if (N <= 0 || N > 10) {
        cout << "Quantidade invalida. O valor deve ser entre 1 e 10." << endl;
        return 0;
    }

   for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }

  for (int i = 0; i < N; i++) {
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            contPares++;
        }
    }

  if (contPares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    } else {
        double media = (double)somaPares / contPares;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media << endl;
    }

return 0;
}
