#include <iostream>
using namespace std;

void somaMatrizes(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];
    
    cout << "Digite os elementos da primeira matriz 3x3:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    
    cout << "Digite os elementos da segunda matriz 3x3:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }
    
    somaMatrizes(A, B, C);
    
    cout << "\nMatriz resultante da soma:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}