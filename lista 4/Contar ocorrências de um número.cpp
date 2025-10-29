#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[4][4], numero;
    
    cout << "Digite os elementos da matriz 4x4:" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }
    
    cout << "Digite o numero a ser contado: ";
    cin >> numero;
    
    int ocorrencias = contarOcorrencias(matriz, numero);
    cout << "O numero " << numero << " aparece " << ocorrencias << " vezes na matriz." << endl;
    
    return 0;
}