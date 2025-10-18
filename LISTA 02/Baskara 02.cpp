#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Coeficiente a: ";
    cin >> a;
    cout << "Coeficiente b: ";
    cin >> b;
    cout << "Coeficiente c: ";
    cin >> c;
    
    if (a == 0) {
        cout << "Esta equacao nao e do segundo grau" << endl;
        return 0;
    }
    
    double delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        cout << "Esta equacao nao possui raizes reais" << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    
    return 0;
}