#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    string nomes[50];
    int idades[50];
    double alturas[50];

   cout << "Quantas pessoas serao digitadas? ";
   cin >> N;

  for (int i = 0; i < N; i++) {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

  double somaAlturas = 0.0;
  for (int i = 0; i < N; i++) {
      somaAlturas += alturas[i];
    }
  double mediaAltura = somaAlturas / N;

  int contMenores = 0;
    for (int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            contMenores++;
        }
    }

   double porcentagemMenores = (double)contMenores * 100.0 / N;

  cout << fixed << setprecision(2);
  cout << "Altura media: " << mediaAltura << endl;
  cout << "Pessoas com menos de 16 anos: " << setprecision(1) << porcentagemMenores << "%" << endl;

  for (int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }

 return 0;
}
