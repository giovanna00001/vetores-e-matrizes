#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int N;
    string nomes[50];
    double nota1[50], nota2[50];

   cout << "Quantos alunos serao digitados? ";
   cin >> N;
   cin.ignore(); 

  for (int i = 0; i < N; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:" << endl;
        getline(cin, nomes[i]);
        cin >> nota1[i];
        cin >> nota2[i];
        cin.ignore(); 
    }

  cout << "Alunos aprovados:" << endl;
  for (int i = 0; i < N; i++) {
        double media = (nota1[i] + nota2[i]) / 2.0;
        if (media >= 6.0) {
            cout << nomes[i] << endl;
        }
    }

 return 0;
}
