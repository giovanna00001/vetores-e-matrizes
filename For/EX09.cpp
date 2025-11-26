#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, qtd, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char tipo;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> qtd >> tipo;
        total += qtd;
        if (tipo == 'C') coelhos += qtd;
        else if (tipo == 'R') ratos += qtd;
        else if (tipo == 'S') sapos += qtd;
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (coelhos * 100.0 / total) << " %" << endl;
    cout << "Percentual de ratos: " << (ratos * 100.0 / total) << " %" << endl;
    cout << "Percentual de sapos: " << (sapos * 100.0 / total) << " %" << endl;
    return 0;
}
