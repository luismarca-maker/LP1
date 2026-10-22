#include <iostream>
#include <string>
using namespace std;

int main() {
    string primerNombre, apellidos;
    int anios;

    cout << "Ingresa tu nombre: ";
    cin >> primerNombre;
    cout << "Ingresa tu apellido: ";
    cin >> apellidos;
    cout << "Ingresa tu edad: ";
    cin >> anios;

    cout << "Nombre completo: " << primerNombre << " " << apellidos << endl;
    cout << "Edad: " << anios << " anios" << endl;
    return 0;
}
