#include <iostream>
using namespace std;

int main() {
    float masa, talla, indice;
    int tramo;

    cout << "=== CALCULADORA DE INDICE DE MASA CORPORAL ===" << endl;
    cout << "Ingrese su peso en kg: ";
    cin >> masa;
    cout << "Ingrese su estatura en metros: ";
    cin >> talla;

    if (masa <= 0 || talla <= 0) {
        cout << "ERROR: El peso y la estatura deben ser mayores a 0." << endl;
    } else {
        indice = masa / (talla * talla);
        cout << "Su IMC es: " << indice << endl;

        if (indice < 18.5) tramo = 1;
        else if (indice >= 18.5 && indice <= 24.9) tramo = 2;
        else if (indice >= 25 && indice <= 29.9) tramo = 3;
        else if (indice >= 30.0 && indice <= 34.9) tramo = 4;
        else tramo = 5;

        switch (tramo) {
            case 1: cout << "Bajo peso" << endl; break;
            case 2: cout << "Peso Normal" << endl; break;
            case 3: cout << "Sobrepeso" << endl; break;
            case 4: cout << "Obesidad grado I" << endl; break;
            case 5: cout << "Obesidad de grado II" << endl; break;
            default: cout << "No se pudo clasificar el IMC" << endl; break;
        }
    }
    return 0;
}
