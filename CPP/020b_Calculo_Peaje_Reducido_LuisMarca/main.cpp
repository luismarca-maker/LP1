#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tipoVeh, tag;
    float tonelaje;
    double pctRebaja = 0.0;
    double sancion = 0.0;
    double importeInicial;

    cout << "SISTEMA DE COBRO DE PEAJE" << endl;
    cout << "Ingrese la categoria del vehiculo " << endl;
    cout << "\n 1: Auto/Camioneta($3.00)" << endl;
    cout << "\n 2: Autobus($6.00)" << endl;
    cout << "\n 3: Camion de carga($10.00)" << endl;
    cin >> tipoVeh;

    cout << "Ingrese el peso total del vehiculo en toneladas" << endl;
    cin >> tonelaje;

    if (tonelaje <= 0) {
        cout << "ERROR: El peso del vehiculo ingresado debe de ser mayor a cero ";
        return 1;
    }
    else {
        cout << "Cuenta con pase electronico (Telepeaje)? (1,si o 0,no)" << endl;
        cin >> tag;

        if (tag == 1) pctRebaja = 0.15;
        if (tipoVeh == 3 && tonelaje >= 12) sancion = (tonelaje - 12) * 2.5;

        switch (tipoVeh) {
            case 1: importeInicial = 3; break;
            case 2: importeInicial = 6; break;
            case 3: importeInicial = 10; break;
            default: cout << "ERROR: Codigo del servicio no valido" << endl; return 1;
        }

        double rebajaTotal = importeInicial * pctRebaja;
        double importeFinal = importeInicial - rebajaTotal + sancion;

        cout << fixed << setprecision(2);
        cout << "\n Boleta de Peaje" << endl;
        cout << "Monto Original: " << importeInicial << endl;
        cout << "Descuento total: " << rebajaTotal << endl;
        cout << "Multas por exceso de peso: " << sancion << endl;
        cout << "Monto Final: " << importeFinal << endl;
    }
    return 0;
}
