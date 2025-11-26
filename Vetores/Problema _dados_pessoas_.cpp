#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double alturas[50];
    char generos[50];

  cout << "Quantas pessoas serao digitadas? ";
  cin >> N;

  for (int i = 0; i < N; i++) {
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> generos[i];
    }

   double maiorAltura = alturas[0];
   double menorAltura = alturas[0];
   double somaAlturaMulheres = 0.0;
   int contMulheres = 0;
   int contHomens = 0;

   for (int i = 0; i < N; i++) {
        if (alturas[i] > maiorAltura) maiorAltura = alturas[i];
        if (alturas[i] < menorAltura) menorAltura = alturas[i];

   if (generos[i] == 'F' || generos[i] == 'f') {
            somaAlturaMulheres += alturas[i];
            contMulheres++;
        } else if (generos[i] == 'M' || generos[i] == 'm') {
            contHomens++;
        }
    }

  double mediaAlturaMulheres = contMulheres > 0 ? somaAlturaMulheres / contMulheres : 0.0;

  cout << fixed << setprecision(2);
  cout << "Menor altura = " << menorAltura << endl;
  cout << "Maior altura = " << maiorAltura << endl;
  cout << "Media das alturas das mulheres = " << mediaAlturaMulheres << endl;
  cout << "Numero de homens = " << contHomens << endl;

return 0;
}
