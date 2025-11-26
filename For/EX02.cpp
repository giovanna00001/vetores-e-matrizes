#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X > Y) swap(X, Y); // garante que X < Y

    int soma = 0;
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) soma += i;
    }

    cout << soma << endl;
    return 0;
}
