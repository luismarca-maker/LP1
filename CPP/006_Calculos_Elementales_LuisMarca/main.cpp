#include <iostream>
using namespace std;

int main() {
    float x, y, adicion, sustraccion, producto, cociente;

    cout << "Sistema de operaciones basicas" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> x;
    cout << "Ingresa el segundo numero: ";
    cin >> y;

    adicion = x + y;
    sustraccion = x - y;
    producto = x * y;

    cout << "\nEl resultado de la suma es: " << adicion << endl;
    cout << "El resultado de la resta es: " << sustraccion << endl;
    cout << "El resultado de la multiplicacion es: " << producto << endl;

    if (y != 0) {
        cociente = x / y;
        cout << "El resultado de la division es: " << cociente << endl;
    } else {
        cout << "El resultado de la division es: No se puede dividir entre cero" << endl;
    }
    return 0;
}
