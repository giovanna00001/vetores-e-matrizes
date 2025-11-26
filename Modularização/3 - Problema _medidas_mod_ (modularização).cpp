#include <iostream>
using namespace std;

double areaQuadrado(double lado) {
    return lado * lado;
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

double areaTrapezio(double baseMaior, double baseMenor, double altura) {
    return (baseMaior + baseMenor) * altura / 2.0;
}

int main() {

    double x, y, z;

    cout << "Digite os valores de X, Y e Z: ";
    cin >> x >> y >> z;

    double aQuadrado = areaQuadrado(x);
    double aTriangulo = areaTriangulo(x, y);
    double aTrapezio = areaTrapezio(x, y, z);

    cout << "AREA DO QUADRADO = " << aQuadrado << endl;
    cout << "AREA DO TRIANGULO = " << aTriangulo << endl;
    cout << "AREA DO TRAPEZIO = " << aTrapezio << endl;

    return 0;
}
