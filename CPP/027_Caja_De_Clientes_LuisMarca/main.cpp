#include <iostream>
using namespace std;

int main() {
    double recaudado = 0, abono;
    int clientesVip = 0;

    cout << "REGISTRO DE CLIENTES" << endl;

    for (int k = 1; k <= 8; k++) {
        cout << "Ingrese el monto de pago " << k << ": " << endl;
        cin >> abono;

        recaudado = recaudado + abono;

        if (abono > 100) {
            clientesVip += 1;
        }
    }

    double media = recaudado / 8;

    cout << "Total acumulado en caja: S/." << recaudado << endl;
    cout << "El promedio de consumo es: S/." << media << endl;
    cout << "Cantidad total de clientes preferenciales: " << clientesVip << endl;
    return 0;
}
