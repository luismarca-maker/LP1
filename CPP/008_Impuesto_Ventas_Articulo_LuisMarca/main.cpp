#include <iostream>
using namespace std;

int main() {
    const double TASA_IMPUESTO = 0.18;
    double valorNeto, impuesto, valorTotal;

    cout << "Ingrese el precio base del producto: ";
    cin >> valorNeto;

    impuesto = valorNeto * TASA_IMPUESTO;
    valorTotal = valorNeto + impuesto;

    cout << "El IGV (18%) es: " << impuesto << endl;
    cout << "El precio final con IGV es: " << valorTotal << endl;
    return 0;
}
