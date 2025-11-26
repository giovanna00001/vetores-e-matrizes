#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long fat = 1;
    for (int i = 2; i <= N; i++) {
        fat *= i;
    }
    cout << fat << endl;
    return 0;
}
