#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        if (X == 0) {
            cout << "NULO" << endl;
        } else {
            if (X % 2 == 0) cout << "PAR ";
            else cout << "IMPAR ";
            if (X > 0) cout << "POSITIVO" << endl;
            else cout << "NEGATIVO" << endl;
        }
    }
    return 0;
}
