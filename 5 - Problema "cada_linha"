#include <iostream>
using namespace std;

int main() {

    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    int mat[10][10];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA:\n";

    for (int i = 0; i < N; i++) {

        int maior = mat[i][0];

        for (int j = 1; j < N; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }

        cout << maior << endl;
    }

    return 0;
}
