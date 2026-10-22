#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int dias = 0, personas = 0, clase = 0, regimen = 0;
    double tarifaNoche = 0.0, rebaja = 0.0, extraPersonas = 0.0, costoComidas = 0.0;
    double subtotal = 0.0, importeFinal = 0.0;

    cout << "TARIFICADOR DE RESERVAS DE HOTEL" << endl;
    cout << "Ingrese el numero de noches de estadia: ";
    cin >> dias;

    if (dias <= 0) {
        cout << "ERROR, el numero de noches debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Ingrese el numero de huespedes: ";
    cin >> personas;

    if (personas < 1) {
        cout << "ERROR, el numero de huespedes debe ser al menos 1" << endl;
        return 1;
    }

    cout << "Plan de alimentacion (1 = Solo desayuno, 2 = Pension Completa): " << endl;
    cin >> regimen;

    if (regimen != 1 && regimen != 2) {
        cout << "ERROR: plan de alimentacion no valido" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de habitacion" << endl;
    cout << "1: Habitacion Estandar (S/.50.00 por noche)" << endl;
    cout << "2: Habitacion Doble (S/.80.00 por noche)" << endl;
    cout << "3: Suite Ejecutiva (S/.140.00 por noche)" << endl;
    cout << "OPCION: ";
    cin >> clase;

    switch (clase) {
        case 1: tarifaNoche = 50.00; break;
        case 2: tarifaNoche = 80.00; break;
        case 3: tarifaNoche = 140.00; break;
        default: cout << "ERROR: tipo de habitacion no valida" << endl; return 1;
    }

    if (clase == 1 && personas > 1) extraPersonas = (personas - 1) * 15;
    if (clase == 2 && personas > 2) extraPersonas = (personas - 2) * 15;
    if (clase == 3 && personas > 3) extraPersonas = (personas - 3) * 15;

    if (regimen == 2) costoComidas = 25 * personas;

    subtotal = ((tarifaNoche + costoComidas) + extraPersonas) * dias;

    if (dias > 5) rebaja = subtotal * 0.12;

    importeFinal = subtotal - rebaja;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;

    if (clase == 1) cout << "Tipo de habitacion : Habitacion Estandar " << endl;
    if (clase == 2) cout << "Tipo de habitacion : Habitacion Doble " << endl;
    if (clase == 3) cout << "Tipo de habitacion : Suite Ejecutiva " << endl;

    cout << "Subtotal de alojamiento: S/." << tarifaNoche * dias << endl;

    if (clase == 1 && personas > 1) cout << "Recargo por huespedes adicionales: S/." << extraPersonas * dias << endl;
    if (clase == 2 && personas > 2) cout << "Recargo por huespedes adicionales: S/." << extraPersonas * dias << endl;
    if (clase == 3 && personas > 3) cout << "Recargo por huespedes adicionales: S/." << extraPersonas * dias << endl;

    cout << "Costo de alimentacion: S/." << costoComidas * dias << endl;

    if (dias > 5) {
        cout << "Descuento por estadia larga: S/." << rebaja << endl;
        cout << "Monto total a pagar: S/." << importeFinal << endl;
    } else {
        cout << "Monto total a pagar: S/." << subtotal << endl;
    }
    return 0;
}
