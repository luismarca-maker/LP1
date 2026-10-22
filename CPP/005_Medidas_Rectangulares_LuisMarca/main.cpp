#include <iostream>
using namespace std;

int main() {
    double ancho, largo, superficie, contorno;

    cout << "Ingrese la base del rectangulo: ";
    cin >> ancho;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> largo;

    superficie = ancho * largo;
    contorno = 2 * (ancho + largo);

    cout << "El area del rectangulo es: " << superficie << endl;
    cout << "El perimetro del rectangulo es: " << contorno << endl;
    return 0;
}
