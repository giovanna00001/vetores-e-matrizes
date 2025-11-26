#include<iostream>
using namespace std;

int main(){
    int n, qtNegativos =0;
    
    cout << "Qual a ordem da matriz? ";
    cin >> n;
    
    int matriz[n][n];
    
    for (int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            cout << "Elementos [" << lin << "," << col << "]: ";
            cin >> matriz [lin][col];
            if(matriz[lin][col] < 0){qtNegativos++;}
        }
    }
    cout << "Diagonal princial: " << endl;
       for (int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            if(matriz[lin][col] == matriz[lin][lin]){
                cout << matriz[lin][col]<< " ";
            }
        }
    }
    cout << endl;
    cout << "Quantidade de negativos = " << qtNegativos;
    
    return 0;
}
