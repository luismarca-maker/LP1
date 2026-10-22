#include <iostream>
using namespace std;

int main()
{
    int k = 1, acumulado = 0, cantidad = 0, valor;

    cout << "ingrese la cantidad de datos : ";
    cin >> cantidad;

    do {
        cout << "Ingrese numero :" << k << endl;
        cin >> valor;
        acumulado = acumulado + valor;
        k = k + 1;
    } while (k <= cantidad);

    cout << "Suma total = " << acumulado << endl;
    cout << "Promedio = " << acumulado / cantidad << endl;
    return 0;
}
