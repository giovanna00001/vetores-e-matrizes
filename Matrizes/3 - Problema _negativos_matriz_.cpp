#include <iostream>
using namespace std;

int main() {
    int M, N;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> M;

    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> N;

    int matriz[10][10];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "VALORES NEGATIVOS:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] < 0) {
                cout << matriz[i][j] << endl;
            }
        }
    }

    return 0;
}
