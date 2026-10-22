#include <iostream>

using namespace std;

int main()
{
    int nFilas, nCols;
    float total = 0;

    cout << "Ingrese la cantidad de filas: ";
    cin >> nFilas;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> nCols;

    int grilla[nFilas][nCols];

    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << "Ingrese el valor para [" << i << "][" << j << "]: ";
            cin >> grilla[i][j];
            total += grilla[i][j];
        }
    }

    cout << endl;

    cout << "ARREGLO BIDIMENSIONAL" << endl;

    cout << endl;

    for (int i = 0; i < nFilas; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << grilla[i][j] << "\t ";
        }
        cout << endl;
    }

    cout << "La suma de todos los elementos es: " << total << endl;
    return 0;
}
