#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float peso1, talla1, imcCalc;
    int escala;

    cout << "Calculo del Indice de masa corporal" << endl;
    cout << "Ingrese su peso (kg): ";
    cin >> peso1;
    cout << "Ingrese su talla (m): ";
    cin >> talla1;

    if (peso1 <= 0 || talla1 <= 0) {
        cout << "\nError: el peso y estatura deben ser mayores a cero\n" << endl;
    }
    else {
        imcCalc = peso1 / pow(talla1, 2);

        if (imcCalc < 18.5) escala = 1;
        else if (imcCalc >= 18.5 && imcCalc <= 24.9) escala = 2;
        else if (imcCalc >= 25.00 && imcCalc <= 29.9) escala = 3;
        else if (imcCalc >= 30.00 && imcCalc <= 34.9) escala = 4;
        else escala = 5;

        cout << "Su Indice de masa corporal calculado es: " << imcCalc << " kg/m2" << endl;
        cout << "\nDiagnostico: ";

        switch (escala) {
            case 1: cout << "Bajo peso" << endl; break;
            case 2: cout << "Peso normal" << endl; break;
            case 3: cout << "Sobrepeso" << endl; break;
            case 4: cout << "Obesidad grado 1" << endl; break;
            case 5: cout << "Obesidad grado 2" << endl; break;
            default: cout << "No se pudo clasificar el IMC" << endl; break;
        }
    }
    return 0;
}
