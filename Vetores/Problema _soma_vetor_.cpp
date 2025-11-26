#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double numeros[10]; // vetor com até 10 números reais
    double soma = 0.0;

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

  for (int i = 0; i < N; i++) {
        soma += numeros[i];
    }

  double media = soma / N;

   cout << fixed << setprecision(2); 
    cout << "VALORES = ";
    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

  cout << "SOMA = " << soma << endl;
  cout << "MEDIA = " << media << endl;

return 0;
}
