#include <iostream>
using namespace std;

int main() {
    double glicose;
    cout << "Digite a medida da glicose: ";
    cin >> glicose;
    
    cout << "Classificacao: ";
    if (glicose <= 100) {
        cout << "Normal" << endl;
    } else if (glicose <= 140) {
        cout << "Elevado" << endl;
    } else {
        cout << "Diabetes" << endl;
    }
    
    return 0;
}