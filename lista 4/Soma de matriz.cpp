#include <iostream>
using namespace std;

int somaMatriz(int matriz[3][3]) {
    int soma = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[3][3];
    
    cout << "Digite os elementos da matriz 3x3:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    
    cout << "Soma de todos os elementos: " << somaMatriz(matriz) << endl;
    return 0;
}