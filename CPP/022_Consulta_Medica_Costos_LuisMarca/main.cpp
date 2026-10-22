#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int anios, especialidad, esNoche = 0;
    double tarifa = 0.0;
    double rebajaSenior = 0.0;
    double extraNocturno = 0.0;
    double importeTotal = 0.0;

    cout << "CALCULADORA DE TRIAJE Y COSTOS DE CONSULTA MEDICA" << endl;
    cout << "Ingrese su edad: ";
    cin >> anios;

    cout << "Es horario de emergencia nocturna? (1 = Si, 0 = No): " << endl;
    cin >> esNoche;

    if (anios <= 0) {
        cout << "ERROR, la edad debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de servicio" << endl;
    cout << "1: Medicina General ($30.00)" << endl;
    cout << "2: Pediatria ($45.00)" << endl;
    cout << "3: Cardiologia ($70.00)" << endl;
    cout << "4: Traumatologia ($60.00)" << endl;
    cout << "OPCION: ";
    cin >> especialidad;

    switch (especialidad) {
        case 1: tarifa = 30.00; break;
        case 2: tarifa = 45.00; break;
        case 3: tarifa = 70.00; break;
        case 4: tarifa = 60.00; break;
        default: cout << "ERROR: Opcion del servicio no valida" << endl; return 1;
    }

    if (especialidad == 2 && anios >= 18) {
        cout << "El paciente tiene 18 anos o mas, debe ser atendido en Medicina General." << endl;
    }

    if (anios >= 65) rebajaSenior = tarifa * 0.25;
    if (esNoche == 1) extraNocturno = tarifa * 0.20;

    importeTotal = (tarifa - rebajaSenior) + extraNocturno;

    cout << fixed << setprecision(2);
    cout << "Costo del servicio: $" << tarifa << endl;
    cout << "Descuento aplicado: $" << rebajaSenior << endl;
    cout << "Recargo nocturno: $" << extraNocturno << endl;
    cout << "Monto final a pagar: $" << importeTotal << endl;
    return 0;
}
