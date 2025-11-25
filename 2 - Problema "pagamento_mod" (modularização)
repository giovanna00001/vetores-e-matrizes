#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    double valorHora;
    int horas;
};

Funcionario lerFuncionario() {
    Funcionario f;

    cout << "Nome: ";
    cin.ignore();       
    getline(cin, f.nome);

    cout << "Valor por hora: ";
    cin >> f.valorHora;

    cout << "Horas trabalhadas: ";
    cin >> f.horas;

    return f;
}

double calcularPagamento(const Funcionario& f) {
    return f.valorHora * f.horas;
}

void mostrarPagamento(const Funcionario& f, double pagamento) {
    cout << "O pagamento para " << f.nome << " deve ser R$ " 
         << fixed << setprecision(2) << pagamento << endl;
}

int main() {
    Funcionario funcionario = lerFuncionario();

    double pagamento = calcularPagamento(funcionario);

    mostrarPagamento(funcionario, pagamento);

    return 0;
}
