#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N; // quantidade de casos
    for (int i = 0; i < N; i++) {
        double a, b;
        cin >> a >> b;
        if (b == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
            cout << fixed << setprecision(1) << a / b << endl;
        }
    }
    return 0;
}

