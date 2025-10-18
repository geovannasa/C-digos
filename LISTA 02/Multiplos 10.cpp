#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois numeros inteiros:" << endl;
    cin >> a >> b;
    
    if (a == 0 || b == 0) {
        cout << "Nao sao multiplos (um dos numeros e zero)" << endl;
    } else if (a % b == 0 || b % a == 0) {
        cout << "Sao multiplos" << endl;
    } else {
        cout << "Nao sao multiplos" << endl;
    }
    
    return 0;
}