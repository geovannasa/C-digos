#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double raio;
    cin >> raio;

    double area = PI * raio * raio;

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;

    return 0;
}
