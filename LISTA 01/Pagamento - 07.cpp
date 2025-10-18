#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valor_hora;
    int horas;
    cin >> nome >> valor_hora >> horas;

    double pagamento = valor_hora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;

    return 0;
}
