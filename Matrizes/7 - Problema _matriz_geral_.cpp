#include <iostream>
using namespace std;

int main() {

    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    double mat[10][10];

    // Leitura da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    // (a) Soma dos positivos
    double somaPos = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] > 0) {
                somaPos += mat[i][j];
            }
        }
    }

    cout << "SOMA DOS POSITIVOS: " << somaPos << endl;

    // (b) Ler índice de linha e imprimir a linha
    int linha;
    cout << "Escolha uma linha: ";
    cin >> linha;

    cout << "LINHA ESCOLHIDA: ";
    for (int j = 0; j < N; j++) {
        cout << mat[linha][j] << " ";
    }
    cout << endl;

    // (c) Ler índice de coluna e imprimir a coluna
    int coluna;
    cout << "Escolha uma coluna: ";
    cin >> coluna;

    cout << "COLUNA ESCOLHIDA: ";
    for (int i = 0; i < N; i++) {
        cout << mat[i][coluna] << " ";
    }
    cout << endl;

    // (d) Diagonal principal
    cout << "DIAGONAL PRINCIPAL: ";
    for (int i = 0; i < N; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    // (e) Elevar ao quadrado números negativos e imprimir matriz alterada
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = mat[i][j] * mat[i][j];
            }
        }
    }

    cout << "MATRIZ ALTERADA:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
