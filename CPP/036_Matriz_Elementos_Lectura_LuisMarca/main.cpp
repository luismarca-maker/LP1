#include <iostream>

using namespace std;

int main() {
    int totalFilas, totalCols;

    cout << "Ingrese el numero de filas: ";
    cin >> totalFilas;
    cout << "Ingrese el numero de columnas: ";
    cin >> totalCols;

    int rejilla[50][50];

    cout << "Ingrese los elementos" << endl;
    for (int p = 0; p < totalFilas; p++) {
        for (int q = 0; q < totalCols; q++) {
            cout << "A [" << p << "][" << q << "]: ";
            cin >> rejilla[p][q];
        }
    }

    for (int p = 0; p < totalFilas; p++) {
        for (int q = 0; q < totalCols; q++) {
            cout << rejilla[p][q] << "\t";
        }
        cout << endl;
    }

    return 0;
}
