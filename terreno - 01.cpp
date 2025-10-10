#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, valorMetro;
    
    cin >> largura >> comprimento >> valorMetro;
    
    double area = largura * comprimento;
    double preco = area * valorMetro;
    
    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = R$ " << preco << endl;
    
    return 0;
}