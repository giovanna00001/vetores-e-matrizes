#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    string nomes[50];
    double precoCompra[50], precoVenda[50];

   cout << "Serao digitados dados de quantos produtos? ";
  cin >> N;
  cin.ignore(); 

  for (int i = 0; i < N; i++) {
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: ";
        getline(cin, nomes[i]);
        cout << "Preco de compra: ";
        cin >> precoCompra[i];
        cout << "Preco de venda: ";
        cin >> precoVenda[i];
        cin.ignore();
    } 

  int abaixo10 = 0, entre10e20 = 0, acima20 = 0;
  double totalCompra = 0.0, totalVenda = 0.0, lucroTotal = 0.0;

   for (int i = 0; i < N; i++) {
        double lucro = precoVenda[i] - precoCompra[i];
        double percentualLucro = (lucro / precoCompra[i]) * 100.0;

  if (percentualLucro < 10.0) {
            abaixo10++;
        } else if (percentualLucro <= 20.0) {
            entre10e20++;
        } else {
            acima20++;
        }

  totalCompra += precoCompra[i];
  totalVenda += precoVenda[i];
  lucroTotal += lucro;
    }

  cout << fixed << setprecision(2);
  cout << "RELATORIO:" << endl;
  cout << "Lucro abaixo de 10%: " << abaixo10 << endl;
  cout << "Lucro entre 10% e 20%: " << entre10e20 << endl;
  cout << "Lucro acima de 20%: " << acima20 << endl;
  cout << "Valor total de compra: " << totalCompra << endl;
  cout << "Valor total de venda: " << totalVenda << endl;
  cout << "Lucro total: " << lucroTotal << endl;

 return 0;
}
