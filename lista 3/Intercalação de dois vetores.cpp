#include <iostream>
using namespace std;

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    
    cout << "Digite 5 elementos para o primeiro vetor:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> vetor1[i];
    }
    
    cout << "Digite 5 elementos para o segundo vetor:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> vetor2[i];
    }
    
    for(int i = 0; i < 5; i++) {
        vetor3[2 * i] = vetor1[i];
        vetor3[2 * i + 1] = vetor2[i];
    }
    
    cout << "Vetor intercalado: ";
    for(int i = 0; i < 10; i++) {
        cout << vetor3[i] << " ";
    }
    cout << endl;
    
    return 0;
}