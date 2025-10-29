#include <iostream>
using namespace std;

int main() {
    double vetor[8], soma = 0;
    
    cout << "Digite 8 numeros reais:" << endl;
    for(int i = 0; i < 8; i++) {
        cin >> vetor[i];
        soma += vetor[i];
    }
    
    double media = soma / 8;
    cout << "A media dos elementos e: " << media << endl;
    
    return 0;
}