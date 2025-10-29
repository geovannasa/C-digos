#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    
    cout << "Digite os elementos da matriz 4x4:" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }
    
    int maior = matriz[0][0];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    cout << "Maior elemento da matriz: " << maior << endl;
    return 0;
}