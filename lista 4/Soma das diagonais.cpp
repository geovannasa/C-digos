#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    
    cout << "Digite os elementos da matriz 3x3:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }
    
    int somaPrincipal = 0, somaSecundaria = 0;
    
    for(int i = 0; i < 3; i++) {
        somaPrincipal += matriz[i][i];         
        somaSecundaria += matriz[i][2 - i];     
    }
    
    cout << "Soma da diagonal principal: " << somaPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaSecundaria << endl;
    
    return 0;
}