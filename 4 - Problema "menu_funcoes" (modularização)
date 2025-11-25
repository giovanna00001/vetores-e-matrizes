#include <iostream>
using namespace std;

const int MAX = 100;

int lerVetor(int v[]) {
    int N;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    return N;
}

double mediaValores(int v[], int N) {
    if (N == 0) return 0;

    double soma = 0;
    for (int i = 0; i < N; i++) {
        soma += v[i];
    }
    return soma / N;
}

int maiorValor(int v[], int N) {
    int maior = v[0];
    for (int i = 1; i < N; i++) {
        if (v[i] > maior) maior = v[i];
    }
    return maior;
}

int menorValor(int v[], int N) {
    int menor = v[0];
    for (int i = 1; i < N; i++) {
        if (v[i] < menor) menor = v[i];
    }
    return menor;
}

int contarPares(int v[], int N) {
    int cont = 0;
    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0) cont++;
    }
    return cont;
}

void mostrarMenu() {
    cout << "\n===== MENU =====\n";
    cout << "1 - Ler N e o vetor\n";
    cout << "2 - Media dos valores\n";
    cout << "3 - Maior e menor valor\n";
    cout << "4 - Contar pares\n";
    cout << "5 - Sair\n";
    cout << "Escolha uma opcao: ";
}

int main() {
    int vetor[MAX];
    int N = 0;
    int opcao;

    do {
        mostrarMenu();
        cin >> opcao;

        switch (opcao) {

        case 1:
            N = lerVetor(vetor);
            break;

        case 2:
            if (N == 0) {
                cout << "Vetor ainda nao foi lido!\n";
            } else {
                cout << "Media = " << mediaValores(vetor, N) << endl;
            }
            break;

        case 3:
            if (N == 0) {
                cout << "Vetor ainda nao foi lido!\n";
            } else {
                cout << "Maior valor = " << maiorValor(vetor, N) << endl;
                cout << "Menor valor = " << menorValor(vetor, N) << endl;
            }
            break;

        case 4:
            if (N == 0) {
                cout << "Vetor ainda nao foi lido!\n";
            } else {
                cout << "Quantidade de pares = " << contarPares(vetor, N) << endl;
            }
            break;

        case 5:
            cout << "Encerrando programa...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
        }

    } while (opcao != 5);

    return 0;
}
