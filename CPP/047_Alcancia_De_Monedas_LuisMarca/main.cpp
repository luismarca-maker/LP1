#include <iostream>
using namespace std;

int main()
{
    double aporte, fondo = 0;
    char opcion;

    do {
        cout << "ingrese el monto que desea ingresar (S/.1, S/.2, S/.5, S/.10, S/.20) : S/.";
        cin >> aporte;

        if (aporte != 1 && aporte != 2 && aporte != 5 && aporte != 10 && aporte != 20) {
            cout << "El valor ingresado no es correcto" << endl;
            break;
        }
        fondo = fondo + aporte;
        cout << "Saldo actual : S/." << fondo << endl;

        cout << "Desea ingresar mas dinero? (S = si, N = no): " << endl;
        cin >> opcion;
    } while (opcion == 'S' || opcion == 's');

    cout << "Saldo total = " << fondo << endl;
    return 0;
}
