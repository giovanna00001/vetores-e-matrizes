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

    int soma = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {  
            // elementos acima da diagonal têm j > i
            soma += mat[i][j];
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;

    return 0;
}
