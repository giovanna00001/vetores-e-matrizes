#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    double altura;
};

int main() {
    int N;

    cout << "Quantas pessoas deseja cadastrar? ";
    cin >> N;
    cin.ignore(); 

    Pessoa pessoas[100]; 

    for (int i = 0; i < N; i++) {
        cout << "Pessoa " << i + 1 << ":\n";
        cout << "Nome: ";
        getline(cin, pessoas[i].nome);
        cout << "Idade: ";
        cin >> pessoas[i].idade;
        cout << "Altura: ";
        cin >> pessoas[i].altura;
        cin.ignore(); // limpar buffer
    }

    double somaAltura = 0.0;
    int contadorMenores16 = 0;

    for (int i = 0; i < N; i++) {
        somaAltura += pessoas[i].altura;
        if (pessoas[i].idade < 16) {
            contadorMenores16++;
        }
    }

    double alturaMedia = somaAltura / N;
    double percentualMenores16 = (contadorMenores16 * 100.0) / N;

    cout << fixed << setprecision(2);
    cout << "\nAltura media: " << alturaMedia << " m" << endl;
    cout << "Percentual de pessoas com menos de 16 anos: " 
         << percentualMenores16 << "%\n";

    if (contadorMenores16 > 0) {
        cout << "Nomes das pessoas com menos de 16 anos:\n";
        for (int i = 0; i < N; i++) {
            if (pessoas[i].idade < 16) {
                cout << pessoas[i].nome << endl;
            }
        }
    }

    return 0;
}
