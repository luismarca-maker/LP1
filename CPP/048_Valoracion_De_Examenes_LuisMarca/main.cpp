#include <iostream>
using namespace std;

int main()
{
    double calificacion, total, orden = 0;

    cout << "Ingrese la cantidad de notas" << endl;
    cin >> total;

    do {
        cout << "Ingrese la nota del Examen Parcial (0 a 20) " << orden << " : " << endl;
        cin >> calificacion;

        if (calificacion < 0 || calificacion > 20) {
            cout << endl << "La nota ingresada no es correcta " << endl;
        }
        if (calificacion >= 10.5 && calificacion <= 20) {
            cout << "Estado: Aprobado" << endl;
        }
        if (calificacion >= 0 && calificacion <= 10.4) {
            cout << "Estado: Desprobado" << endl;
        }
        else {
            cout << "nota no valida" << endl;
        }
        orden = orden + 1;
    } while (orden <= total);

    return 0;
}
