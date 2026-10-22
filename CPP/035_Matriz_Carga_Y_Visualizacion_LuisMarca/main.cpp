#include <iostream>

using namespace std;

int main() {
    int nFilas, nCols;

    cout << "Ingrese el numero de filas: ";
    cin >> nFilas;
    cout << "Ingrese el numero de columnas: ";
    cin >> nCols;

    int tabla[50][50];

    cout << "Ingrese los elementos" << endl;
    for (int r = 0; r < nFilas; r++) {
        for (int c = 0; c < nCols; c++) {
            cout << "A [" << r << "][" << c << "]: ";
            cin >> tabla[r][c];
        }
    }

    for (int r = 0; r < nFilas; r++) {
        for (int c = 0; c < nCols; c++) {
            cout << tabla[r][c] << "\t";
        }
        cout << endl;
    }

    return 0;
}
