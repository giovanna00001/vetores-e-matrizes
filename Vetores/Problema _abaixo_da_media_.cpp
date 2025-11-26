#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double numeros[10]; 
    double soma = 0.0;

  cout << "Quantos elementos vai ter o vetor? ";
  cin >> N;

   if (N <= 0 || N > 10) {
      cout << "Quantidade invalida. O valor deve ser entre 1 e 10." << endl;
       return 0;
    }

   for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> numeros[i];
        soma += numeros[i];
    }

  double media = soma / N;

   cout << fixed << setprecision(3);
   cout << "MEDIA DO VETOR = " << media << endl;

  cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
  cout << fixed << setprecision(1);
  for (int i = 0; i < N; i++) {
       if (numeros[i] < media) {
          cout << numeros[i] << endl;
        }
    }

return 0;
}
