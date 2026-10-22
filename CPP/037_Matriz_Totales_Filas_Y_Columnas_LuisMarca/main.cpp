#include <iostream>

using namespace std;

int main() {
    int nFil, nCol;

    cout << "Ingrese el numero de filas: ";
    cin >> nFil;
    cout << "Ingrese el numero de columnas: ";
    cin >> nCol;

    int cuadro[50][50];
    int totalPorCol[50] = {0};

    cout << "Ingreso de elementos";
    for (int a = 0; a < nFil; a++) {
        for (int b = 0; b < nCol; b++) {
            cout << "Elemento [" << a << "][" << b << "]: ";
            cin >> cuadro[a][b];
            totalPorCol[b] += cuadro[a][b];
        }
    }

    cout << "Matriz y suma por filas" << endl;
    for (int a = 0; a < nFil; a++) {
        int totalFila = 0;
        for (int b = 0; b < nCol; b++) {
            cout << cuadro[a][b] << "\t";
            totalFila += cuadro[a][b];
        }
        cout << "| Suma fila: " << totalFila << endl;
    }

    cout << "Suma de cada columna:\n";
    for (int b = 0; b < nCol; b++) {
        cout << totalPorCol[b] << "\t";
    }
    cout << endl;

    return 0;
}
