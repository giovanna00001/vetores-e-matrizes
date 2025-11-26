 #include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string nomes[50];
    int idades[50];

   cout << "Quantas pessoas voce vai digitar? ";
   cin >> N;

  cin.ignore();

  for (int i = 0; i < N; i++) {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cin.ignore(); 
    }

  int maiorIdade = idades[0];
  int posicaoMaisVelho = 0;

   for (int i = 1; i < N; i++) {
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
            posicaoMaisVelho = i;
        }
    }

  cout << "PESSOA MAIS VELHA: " << nomes[posicaoMaisVelho] << endl;

 return 0;
}
