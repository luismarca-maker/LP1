#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float coefA, coefB, coefC, delta, raiz1, raiz2, parteReal, parteImag;

    cout << "Ingrese el valor de a: ";
    cin >> coefA;
    cout << "Ingrese el valor de b: ";
    cin >> coefB;
    cout << "Ingrese el valor de c: ";
    cin >> coefC;

    delta = (coefB * coefB) - (4 * coefA * coefC);

    if (delta > 0) {
        raiz1 = (-coefB + sqrt(delta)) / (2 * coefA);
        raiz2 = (-coefB - sqrt(delta)) / (2 * coefA);
        cout << "\nLas raices son reales y diferentes:" << endl;
        cout << "x1 = " << raiz1 << endl;
        cout << "x2 = " << raiz2 << endl;
    } else if (delta == 0) {
        raiz1 = -coefB / (2 * coefA);
        cout << "\nLa raiz es real y doble (x1 = x2):" << endl;
        cout << "x1 = x2 = " << raiz1 << endl;
    } else {
        parteReal = -coefB / (2 * coefA);
        parteImag = sqrt(-delta) / (2 * coefA);
        cout << "\nLas raices son complejas:" << endl;
        cout << "x1 = " << parteReal << " + " << parteImag << "i" << endl;
        cout << "x2 = " << parteReal << " - " << parteImag << "i" << endl;
    }
    return 0;
}
