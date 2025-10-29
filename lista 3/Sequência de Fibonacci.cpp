#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Quantos elementos da sequencia de Fibonacci deseja? ";
    cin >> n;
    
    if(n <= 0) {
        cout << "Numero invalido!" << endl;
        return 0;
    }
    
    long long fib1 = 0, fib2 = 1, fib3;
    
    cout << "Sequencia de Fibonacci: ";
    
    if(n >= 1) cout << fib1 << " ";
    if(n >= 2) cout << fib2 << " ";
    
    for(int i = 3; i <= n; i++) {
        fib3 = fib1 + fib2;
        cout << fib3 << " ";
        fib1 = fib2;
        fib2 = fib3;
    }
    cout << endl;
    
    return 0;
}