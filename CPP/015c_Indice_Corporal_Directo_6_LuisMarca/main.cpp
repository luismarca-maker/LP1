#include <iostream>
using namespace std;

int main() {
    float pesoKg, estaturaM, valorIMC;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> pesoKg;
    cout << "Ingrese su altura en metros: ";
    cin >> estaturaM;

    if (pesoKg <= 0 || estaturaM <= 0) {
        cout << "Error: El peso y la altura deben ser mayores a cero." << endl;
    } else {
        valorIMC = pesoKg / (estaturaM * estaturaM);
        cout << "Su Indice de Masa Corporal (IMC) es: " << valorIMC << endl;

        if (valorIMC < 18.5) {
            cout << "Clasificacion: Bajo peso" << endl;
        }
        else if (valorIMC >= 18.5 && valorIMC <= 24.9) {
            cout << "Clasificacion: Peso normal" << endl;
        }
        else if (valorIMC >= 25 && valorIMC <= 29.9) {
            cout << "Clasificacion: Sobrepeso" << endl;
        }
        else if (valorIMC >= 30 && valorIMC <= 34.9) {
            cout << "Clasificacion: Obesidad Grado I" << endl;
        }
        else if (valorIMC >= 35 && valorIMC <= 39.9) {
            cout << "Clasificacion: Obesidad Grado II" << endl;
        }
        else {
            cout << "Clasificacion: Obesidad Grado III" << endl;
        }
    }
    return 0;
}
