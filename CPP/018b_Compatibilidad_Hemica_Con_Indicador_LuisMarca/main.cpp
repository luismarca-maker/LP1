#include <iostream>
#include <string>
using namespace std;

int main() {
    int selDador, selReceptor;
    string rotuloDador, rotuloReceptor;
    bool esApto = false;

    cout << "=== Consulta de Compatibilidad Sanguinea ===\n\n";
    cout << "Tipos de sangre disponibles:\n";
    cout << "1. O-\n2. O+\n3. A-\n4. A+\n5. B-\n6. B+\n7. AB-\n8. AB+\n\n";

    cout << "Seleccione el tipo de sangre del DONANTE: ";
    cin >> selDador;
    cout << "Seleccione el tipo de sangre del RECEPTOR: ";
    cin >> selReceptor;

    switch (selDador) {
        case 1: rotuloDador = "O-"; esApto = true; break;
        case 2:
            rotuloDador = "O+";
            switch (selReceptor) {
                case 2: case 4: case 6: case 8: esApto = true; break;
                default: esApto = false;
            }
            break;
        case 3:
            rotuloDador = "A-";
            switch (selReceptor) {
                case 3: case 4: case 7: case 8: esApto = true; break;
                default: esApto = false;
            }
            break;
        case 4:
            rotuloDador = "A+";
            switch (selReceptor) {
                case 4: case 8: esApto = true; break;
                default: esApto = false;
            }
            break;
        case 5:
            rotuloDador = "B-";
            switch (selReceptor) {
                case 5: case 6: case 7: case 8: esApto = true; break;
                default: esApto = false;
            }
            break;
        case 6:
            rotuloDador = "B+";
            switch (selReceptor) {
                case 6: case 8: esApto = true; break;
                default: esApto = false;
            }
            break;
        case 7:
            rotuloDador = "AB-";
            switch (selReceptor) {
                case 7: case 8: esApto = true; break;
                default: esApto = false;
            }
            break;
        case 8:
            rotuloDador = "AB+";
            switch (selReceptor) {
                case 8: esApto = true; break;
                default: esApto = false;
            }
            break;
        default: cout << "\nOpcion de donante invalida.\n"; return 1;
    }

    switch (selReceptor) {
        case 1: rotuloReceptor = "O-"; break;
        case 2: rotuloReceptor = "O+"; break;
        case 3: rotuloReceptor = "A-"; break;
        case 4: rotuloReceptor = "A+"; break;
        case 5: rotuloReceptor = "B-"; break;
        case 6: rotuloReceptor = "B+"; break;
        case 7: rotuloReceptor = "AB-"; break;
        case 8: rotuloReceptor = "AB+"; break;
        default: cout << "\nOpcion de receptor invalida.\n"; return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Donante: " << rotuloDador << "\n";
    cout << "Receptor: " << rotuloReceptor << "\n";

    if (esApto)
        cout << "Compatibilidad: SI, la donacion es compatible.\n";
    else
        cout << "Compatibilidad: NO, la donacion NO es compatible.\n";
    return 0;
}
