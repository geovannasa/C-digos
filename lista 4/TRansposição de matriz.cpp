#include <iostream>
using namespace std;

int main() {
    int matriz[3][2], transposta[2][3];
    
    cout << "Digite os elementos da matriz 3x2:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    
    cout << "\nMatriz original:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nMatriz transposta:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}