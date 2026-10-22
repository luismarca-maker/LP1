#include <iostream>
using namespace std;

int main() {
    int acumulado = 0, puntos = 0, cantidad;

    cout << "PROMEDIO DE NOTAS" << endl;
    cout << "Leer n notas" << endl;
    cin >> cantidad;

    for (int k = 1; k <= cantidad; k++) {
        cout << "Ingrese la nota " << k << ": " << endl;
        cin >> puntos;
        acumulado = acumulado + puntos;
    }

    cout << "La suma de notas es: " << acumulado << endl;
    cout << "El promedio de notas es: " << acumulado / cantidad << endl;
    return 0;
}
