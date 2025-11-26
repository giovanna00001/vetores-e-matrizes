#include<iostream>
using namespace std;

int main() {
    int lin, col;
    double soma;
    
    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> lin;
    
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> col;
    
    double matriz[lin][col];
    
    for (int i = 0; i < lin; i++){
        cout << "Digite os elementos da " << i+1 << "a, linha: "  << endl;
            for(int j = 0; j < col; j++){
                cin >> matriz [i][j];
          }
    }
    cout << "vetor gerado: " << endl;
    for (int i = 0; i < lin; i++){
         soma = 0;
        for(int j = 0; j < col; j++){
            soma = soma + matriz[i][j];
    }
    cout << soma << endl;
    }
    
    return 0;
}
