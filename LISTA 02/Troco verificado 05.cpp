#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int quantidade;
    
    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;
    
    double total = preco * quantidade;
    
    if (dinheiro >= total) {
        double troco = dinheiro - total;
        cout << fixed << setprecision(2);
        cout << "TROCO = " << troco << endl;
    } else {
        double falta = total - dinheiro;
        cout << fixed << setprecision(2);
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << falta << " REAIS" << endl;
    }
    
    return 0;
}