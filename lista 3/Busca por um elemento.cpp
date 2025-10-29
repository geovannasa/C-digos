#include <iostream>
using namespace std;

int main() {
    int vetor[10], numero, encontrado = 0;
    
    cout << "Digite 10 numeros:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    
    cout << "Digite um numero para buscar: ";
    cin >> numero;
    
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == numero) {
            encontrado = 1;
            break;
        }
    }
    
    if(encontrado)
        cout << "O numero " << numero << " esta presente no vetor." << endl;
    else
        cout << "O numero " << numero << " nao esta presente no vetor." << endl;
    
    return 0;
}