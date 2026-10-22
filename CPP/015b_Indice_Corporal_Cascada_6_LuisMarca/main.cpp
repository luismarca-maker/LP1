#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float kilos, metros, resultadoIMC;

    cout << "Ingrese su peso (kg): ";
    cin >> kilos;
    cout << "Ingrese su estatura (m): ";
    cin >> metros;

    if (kilos <= 0 || metros <= 0) {
        cout << "\nLos datos no pueden tomar valores negativos o cero\n";
    }
    else {
        resultadoIMC = kilos / pow(metros, 2);

        if (resultadoIMC < 18.5) {
            cout << "\nEl sujeto pertenece a la categoria de bajo peso\n";
        }
        else {
            if (resultadoIMC >= 18.5 && resultadoIMC <= 24.9) {
                cout << "\nEl sujeto pertenece a la categoria de peso normal\n";
            }
            else {
                if (resultadoIMC >= 25.0 && resultadoIMC <= 29.9) {
                    cout << "\nEl sujeto pertenece a la categoria de sobrepeso\n";
                }
                else {
                    if (resultadoIMC >= 30.0 && resultadoIMC <= 34.9) {
                        cout << "\nEl sujeto pertenece a la categoria de Obesidad grado I\n";
                    }
                    else {
                        if (resultadoIMC >= 35.0 && resultadoIMC <= 39.9) {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado II\n";
                        }
                        else {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado III\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
