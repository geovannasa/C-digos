#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double lan1, lan2, lan3;
    cout << "Digite as tres distancias:" << endl;
    cin >> lan1 >> lan2 >> lan3;
    
    double maior = lan1;
    if (lan2 > maior) maior = lan2;
    if (lan3 > maior) maior = lan3;
    
    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior << endl;
    
    return 0;
}