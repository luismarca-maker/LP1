#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double toneladas;
    int clase;
    double tarifaBase = 0.0;
    double rebajaElectronica = 0.0;
    double recargoPeso = 0.0;
    int tieneTag = 0;
    double importeFinal = 0.0;

    cout << "CALCULADORA DE PEAJE Y EXCESO DE CARGA" << endl;
    cout << "Ingrese el peso total del vehiculo en toneladas: ";
    cin >> toneladas;

    if (toneladas <= 0) {
        cout << "ERROR, el peso del vehiculo debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Cuenta con pase electronico de telepeaje (1 = Si, 0 = No): " << endl;
    cin >> tieneTag;

    cout << "Seleccione la categoria del vehiculo" << endl;
    cout << "1: Auto / camioneta ($3.00)" << endl;
    cout << "2: Autobus ($6.00)" << endl;
    cout << "3: Camion de carga ($10.00)" << endl;
    cout << "OPCION: ";
    cin >> clase;

    switch (clase) {
        case 1: tarifaBase = 3.00; break;
        case 2: tarifaBase = 6.00; break;
        case 3: tarifaBase = 10.00; break;
        default: cout << "ERROR: Opcion de categoria no valida" << endl; return 1;
    }

    if (clase == 3 && toneladas >= 12) {
        recargoPeso = (toneladas - 12) * 2.5;
    }

    if (tieneTag == 1) {
        rebajaElectronica = tarifaBase * 0.15;
    }

    importeFinal = (tarifaBase - rebajaElectronica) + recargoPeso;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;
    cout << "Costo base de la categoria: $" << tarifaBase << endl;
    cout << "Descuento aplicado por pase de Telepeaje: $" << rebajaElectronica << endl;
    cout << "Penalizacion por exceso de peso: $" << recargoPeso << endl;
    cout << "Monto final a pagar: $" << importeFinal << endl;
    return 0;
}
