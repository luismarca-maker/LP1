#include <iostream>
using namespace std;

int main() {
    double recaudo = 0, tarifaPagada;
    int pasajeEntero = 0;

    cout << "EMPRESA DE BUSES RAPIDO DEL SUR" << endl;
    cout << "CONTROL DE PASAJES" << endl;

    for (int k = 1; k <= 10; k++) {
        cout << "Ingrese el monto pagado por el pasajero " << k << ": ";
        cin >> tarifaPagada;

        recaudo = recaudo + tarifaPagada;

        if (tarifaPagada == 15) {
            pasajeEntero += 1;
        }
    }

    double media = recaudo / 10;

    cout << "\n--- Resumen del viaje ---" << endl;
    cout << "Dinero total acumulado en caja: S/." << recaudo << endl;
    cout << "Costo promedio pagado por pasajero: S/." << media << endl;
    cout << "Cantidad total de pasajeros con tarifa completa: " << pasajeEntero << endl;
    return 0;
}
