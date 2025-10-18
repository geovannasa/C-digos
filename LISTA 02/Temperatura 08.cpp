#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temperatura;
    
    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;
    
    cout << "Digite a temperatura: ";
    cin >> temperatura;
    
    cout << fixed << setprecision(2);
    if (escala == 'F' || escala == 'f') {
        double celsius = 5.0 * (temperatura - 32.0) / 9.0;
        cout << "Temperatura equivalente em Celsius: " << celsius << "°C" << endl;
    } else if (escala == 'C' || escala == 'c') {
        double fahrenheit = (temperatura * 9.0 / 5.0) + 32.0;
        cout << "Temperatura equivalente em Fahrenheit: " << fahrenheit << "°F" << endl;
    } else {
        cout << "Escala invalida!" << endl;
    }
    
    return 0;
}