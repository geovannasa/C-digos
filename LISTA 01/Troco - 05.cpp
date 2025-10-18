#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double precoUnitario, valorRecebido, troco;
    int quantidade;
    double valorTotal;

    cout << "Preco unitario do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> valorRecebido;

    valorTotal = precoUnitario * quantidade;
    troco = valorRecebido - valorTotal;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}