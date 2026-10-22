#include <iostream>
using namespace std;

int main() {
    double acumulado = 0, diasAltos = 0;
    double energia = 0;

    cout << "CONSUMO DE kWh UN HOGAR DURANTE 7 DIAS" << endl;

    for (int k = 1; k <= 7; k++) {
        cout << "Ingrese el consumo en kWh dia " << k << ": " << endl;
        cin >> energia;
        acumulado = acumulado + energia;

        if (energia > 15) {
            diasAltos += 1;
        }
    }

    double media = acumulado / 7;

    cout << "Consumo acumulado total de la semana: " << acumulado << endl;
    cout << "El promedio diario: " << media << endl;
    cout << "Cantidad de dias con exceso de consumo: " << diasAltos << endl;
    return 0;
}
