#include <iostream>
#include <cmath>
using namespace std;

double calcularArea(double largura, double altura) {
    return largura * altura;
}

double calcularPerimetro(double largura, double altura) {
    return 2 * (largura + altura);
}

double calcularDiagonal(double largura, double altura) {
    return sqrt(largura * largura + altura * altura);
}

int main() {
    double largura, altura;

    cout << "Entre com a largura do retangulo: ";
    cin >> largura;

    cout << "Entre com a altura do retangulo: ";
    cin >> altura;

    double area = calcularArea(largura, altura);
    double perimetro = calcularPerimetro(largura, altura);
    double diagonal = calcularDiagonal(largura, altura);

    cout << fixed;
    cout.precision(2);

    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}
