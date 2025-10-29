#include <iostream>
using namespace std;

int somaLinha(int matriz[5][5], int linha) {
    int soma = 0;
    for(int j = 0; j < 5; j++) {
        soma += matriz[linha][j];
    }
    return soma;
}

int main() {
    int matriz[5][5], linha;
    
    cout << "Digite os elementos da matriz 5x5:" << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
        }
    }
    
    cout << "Digite o numero da linha (0-4) para somar: ";
    cin >> linha;
    
    if(linha >= 0 && linha < 5) {
        cout << "Soma da linha " << linha << ": " << somaLinha(matriz, linha) << endl;
    } else {
        cout << "Linha invalida!" << endl;
    }
    
    return 0;
}