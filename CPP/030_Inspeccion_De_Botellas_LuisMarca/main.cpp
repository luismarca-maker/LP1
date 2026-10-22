#include <iostream>
using namespace std;

int main() {
    double mayor = 0, menor = 999, acumulado = 0, media = 0, gramos = 0;
    int livianas = 0, aceptadas = 0;

    cout << "CONTROL DE CALIDAD EN PLANTA INDUSTRIAL" << endl;

    for (int k = 1; k <= 8; k++) {
        cout << "Ingrese el peso de la botella " << k << ": ";
        cin >> gramos;

        if (gramos <= 0) {
            cout << "El peso ingresado debe ser mayor a 0" << endl;
            continue;
        }

        acumulado = acumulado + gramos;
        aceptadas++;

        if (gramos > mayor) mayor = gramos;
        if (gramos < menor) menor = gramos;
        if (gramos < 490) livianas += 1;
    }

    if (aceptadas > 0) {
        media = acumulado / aceptadas;
    } else {
        media = 0;
    }

    cout << "Suma total de pesos: " << acumulado << endl;
    cout << "Promedio de pesos: " << media << endl;
    cout << "Peso minimo: " << menor << endl;
    cout << "Peso maximo: " << mayor << endl;
    cout << "Total de botellas con bajo peso: " << livianas << endl;
    return 0;
}
