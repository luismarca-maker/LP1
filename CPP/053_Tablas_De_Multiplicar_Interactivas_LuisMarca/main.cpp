#include <iostream>

using namespace std;

int main()
{
    int numTabla;
    char seguir;

    cout << "Tablas de multiplicar " << endl;
    cout << "De que numero desea la tabla de multiplicar " << endl;
    cin >> numTabla;
    do {
        cout << "Tabla del " << numTabla << endl;

        for (int m = 1; m <= 10; m++) {
            cout << numTabla << " x " << m << " = " << (numTabla * m) << endl;
        }

        cout << "Desea imprimir el siguiente numero? (s/n): " << endl;
        cin >> seguir;

        numTabla += 1;

    } while (seguir == 'S' || seguir == 's');

    return 0;
}
