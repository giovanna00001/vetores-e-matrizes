#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Funcionario {
    string nome;
    double valorHora;
    int horasTrabalhadas;
};

Funcionario lerFuncionario() {
    Funcionario f;

    cout << "Nome: ";
    cin.ignore(); 
    getline(cin, f.nome);

    cout << "Valor por hora: ";
    cin >> f.valorHora;

    cout << "Horas trabalhadas: ";
    cin >> f.horasTrabalhadas;

    return f;
}

double calcularPagamento(const Funcionario &f) {
    return f.valorHora * f.horasTrabalhadas;
}

void mostrarPagamento(const Funcionario &f) {
    double pagamento = calcularPagamento(f);
    cout << "Pagamento de " << f.nome << ": R$ " 
         << fixed << setprecision(2) << pagamento << endl;
}

int main() {
    int N;
    cout << "Quantos funcionarios deseja cadastrar? ";
    cin >> N;

    Funcionario funcionarios[N];

    for (int i = 0; i < N; i++) {
        cout << "\nFuncionario #" << i+1 << endl;
        funcionarios[i] = lerFuncionario();
    }

    cout << "\n--- PAGAMENTOS ---\n";
    for (int i = 0; i < N; i++) {
        mostrarPagamento(funcionarios[i]);
    }

    return 0;
}
