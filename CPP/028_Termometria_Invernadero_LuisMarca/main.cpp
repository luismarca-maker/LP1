#include <iostream>
using namespace std;

int main() {
    double acumTemp = 0, lectura;
    int avisosCalor = 0;

    cout << "TEMPERATURA DE UN INVERNADERO" << endl;
    cout << "Lecturas cada 3 horas (5 registros en total)" << endl;

    for (int k = 1; k <= 5; k++) {
        cout << "Ingrese la temperatura registrada " << k << ": " << endl;
        cin >> lectura;

        acumTemp = acumTemp + lectura;

        if (lectura > 28) {
            avisosCalor += 1;
        }
    }

    double media = acumTemp / 8;

    cout << "El promedio de temperatura es: " << media << "C" << endl;
    cout << "Cantidad total de alertas por calor extremo: " << avisosCalor << endl;
    return 0;
}
