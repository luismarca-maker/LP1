#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double importeBruto;
    int perfilCliente;
    double rebajaBase = 0.0;
    double rebajaExtra = 0.0;
    double rebajaGlobal = 0.0;
    double valorRebaja = 0.0;
    double importeNeto = 0.0;

    cout << "Sistema de ventas y descuentos" << endl;
    cout << "Ingrese el monto total de la compra S/. ";
    cin >> importeBruto;

    if (importeBruto <= 0) {
        cout << "ERROR, el monto debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de cliente" << endl;
    cout << "1: Cliente regular" << endl;
    cout << "2: Cliente miembro" << endl;
    cout << "3: Cliente VIP" << endl;
    cout << "OPCION: ";
    cin >> perfilCliente;

    switch (perfilCliente) {
        case 1: rebajaBase = 0.05; break;
        case 2: rebajaBase = 0.10; break;
        case 3: rebajaBase = 0.20; break;
        default: cout << "ERROR: Opcion del cliente no valida" << endl; return 1;
    }

    if (importeBruto > 200.00) rebajaExtra = 0.05;

    rebajaGlobal = rebajaBase + rebajaExtra;
    valorRebaja = importeBruto * rebajaGlobal;
    importeNeto = importeBruto - valorRebaja;

    cout << fixed << setprecision(2);
    cout << "Monto original: S/. " << importeBruto << endl;
    cout << "Descuento total aplicado: " << (rebajaGlobal * 100) << "%" << endl;
    cout << "Monto de descuento: S/. " << valorRebaja << endl;
    cout << "Monto final a pagar: S/. " << importeNeto << endl;
    return 0;
}
