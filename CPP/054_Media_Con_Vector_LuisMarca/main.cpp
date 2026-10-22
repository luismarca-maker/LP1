#include <iostream>

using namespace std;

int main()
{
    int cantidad = 0, k;
    double acumulado = 0, puntos;

    cout << "Ingrese la cantidad de notas: " << endl;
    cin >> cantidad;

    double listado[cantidad];

    for (k = 0; k < cantidad; k++) {
        cout << "Ingrese la nota " << k + 1 << ": " << endl;
        cin >> puntos;
        listado[k] = puntos;
        acumulado = acumulado + puntos;
    }

    cout << "LA LISTA DE TODAS LAS NOTAS" << endl;
    for (k = 0; k < cantidad; k++) {
        cout << "Nota en indice [" << k << "]: " << listado[k] << endl;
    }

    cout << "El promedio de notas es: " << acumulado / cantidad << endl;

    return 0;
}
