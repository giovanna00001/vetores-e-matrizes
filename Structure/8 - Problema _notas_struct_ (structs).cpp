#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

struct Aluno {
    string nome;
    double nota1;
    double nota2;
};

int main() {
    int N;
    cout << "Quantos alunos deseja cadastrar? ";
    cin >> N;
    cin.ignore();

    Aluno alunos[100]; 

    for (int i = 0; i < N; i++) {
        cout << "Aluno " << i + 1 << ":\n";
        cout << "Nome: ";
        getline(cin, alunos[i].nome);
        cout << "Nota 1: ";
        cin >> alunos[i].nota1;
        cout << "Nota 2: ";
        cin >> alunos[i].nota2;
        cin.ignore(); 
    }

    cout << fixed << setprecision(1);
    cout << "\nAlunos aprovados:\n";

    for (int i = 0; i < N; i++) {
        double media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        if (media >= 6.0) {
            cout << alunos[i].nome << " - Media: " << media << endl;
        }
    }

    return 0;
}
