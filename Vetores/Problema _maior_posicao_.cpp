#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double numeros[10]; // vetor com capacidade máxima de 10 números reais

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

  double maior = numeros[0];
  int posicaoMaior = 0;

  for (int i = 1; i < N; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicaoMaior = i;
        }
    }

  cout << fixed << setprecision(1);
  cout << "MAIOR VALOR = " << maior << endl;
  cout << "POSICAO DO MAIOR VALOR = " << posicaoMaior << endl;

return 0;
}
