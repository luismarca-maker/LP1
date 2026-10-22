#include <iostream>
#include <string>
using namespace std;

int main() {
    double mgdl;
    int modo;
    string nombreModo, veredicto;

    cout << "=== Clasificador de Glucosa en Sangre ===\n\n";
    cout << "Tipo de medicion:\n";
    cout << "1. En ayunas\n";
    cout << "2. Aleatoria\n";
    cout << "3. Postprandial (2h despues de comer)\n";
    cout << "Seleccione una opcion: ";
    cin >> modo;

    cout << "Ingrese el valor de glucosa (mg/dL): ";
    cin >> mgdl;

    switch (modo) {
        case 1:
            nombreModo = "Ayunas";
            if (mgdl < 70) veredicto = "Hipoglucemia";
            else if (mgdl <= 99) veredicto = "Normal";
            else if (mgdl >= 100 && mgdl <= 125) veredicto = "Prediabetes (glucosa en ayunas alterada)";
            else veredicto = "Diabetes";
            break;

        case 2:
            nombreModo = "Aleatoria";
            if (mgdl < 70) veredicto = "Hipoglucemia";
            else if (mgdl <= 139) veredicto = "Normal";
            else if (mgdl >= 140 && mgdl <= 199) veredicto = "Riesgo elevado / posible prediabetes";
            else veredicto = "Diabetes (requiere confirmacion)";
            break;

        case 3:
            nombreModo = "Postprandial";
            if (mgdl < 70) veredicto = "Hipoglucemia";
            else if (mgdl <= 139) veredicto = "Normal";
            else if (mgdl >= 140 && mgdl <= 199) veredicto = "Prediabetes (intolerancia a la glucosa)";
            else veredicto = "Diabetes";
            break;

        default:
            cout << "Opcion invalida.\n";
            return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Tipo de medicion: " << nombreModo << "\n";
    cout << "Glucosa: " << mgdl << " mg/dL\n";
    cout << "Clasificacion: " << veredicto << "\n";
    cout << "\nNota: Rangos de referencia generales, no sustituyen diagnostico medico.\n";
    return 0;
}
