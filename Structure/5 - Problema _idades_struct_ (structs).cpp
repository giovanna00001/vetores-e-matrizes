#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    Pessoa p1, p2;

    cout << "Dados da primeira pessoa:\n";
    cout << "Nome: ";
    getline(cin, p1.nome);
    cout << "Idade: ";
    cin >> p1.idade;
    cin.ignore();

    cout << "Dados da segunda pessoa:\n";
    cout << "Nome: ";
    getline(cin, p2.nome);
    cout << "Idade: ";
    cin >> p2.idade;

    double media = (p1.idade + p2.idade) / 2.0;

    cout << "A IDADE MEDIA DE " << p1.nome << " E " << p2.nome
         << " = " << media << endl;

    return 0;
}
