#include <iostream>
using namespace std;

int main() {
    const double CTE_PI = 3.14159265358979;
    double r, superficie;

    cout << "Ingrese el radio del circulo: ";
    cin >> r;

    superficie = CTE_PI * r * r;

    cout << "El area del circulo es: " << superficie << endl;
    return 0;
}
