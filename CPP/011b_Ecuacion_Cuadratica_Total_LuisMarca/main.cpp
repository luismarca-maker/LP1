#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main() {
    double p, q, r;

    cout << "=== Resolucion de ecuaciones de segundo grado (ax^2 + bx + c = 0) ===\n";
    cout << "Ingrese el coeficiente a: ";
    cin >> p;
    cout << "Ingrese el coeficiente b: ";
    cin >> q;
    cout << "Ingrese el coeficiente c: ";
    cin >> r;

    if (p == 0) {
        if (q == 0) {
            if (r == 0)
                cout << "\nCualquier valor de x es solucion (0 = 0).\n";
            else
                cout << "\nNo tiene solucion (ecuacion inconsistente).\n";
        } else {
            double solucion = -r / q;
            cout << "\nEs una ecuacion lineal. Solucion: x = " << solucion << "\n";
        }
        return 0;
    }

    double disc = q * q - 4 * p * r;

    cout << "\nDiscriminante: " << disc << "\n";

    if (disc > 0) {
        double s1 = (-q + sqrt(disc)) / (2 * p);
        double s2 = (-q - sqrt(disc)) / (2 * p);
        cout << "Raices reales y distintas:\n";
        cout << "x1 = " << s1 << "\n";
        cout << "x2 = " << s2 << "\n";
    } else if (disc == 0) {
        double s = -q / (2 * p);
        cout << "Raiz real doble:\n";
        cout << "x = " << s << "\n";
    } else {
        complex<double> z1((-q) / (2 * p),  sqrt(-disc) / (2 * p));
        complex<double> z2((-q) / (2 * p), -sqrt(-disc) / (2 * p));
        cout << "Raices complejas conjugadas:\n";
        cout << "x1 = " << z1.real() << " + " << z1.imag() << "i\n";
        cout << "x2 = " << z2.real() << " - " << abs(z2.imag()) << "i\n";
    }
    return 0;
}
