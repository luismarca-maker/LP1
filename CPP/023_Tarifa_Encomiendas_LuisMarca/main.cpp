#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int destino, urgencia, perfil;
    float kilos;
    double pctRebaja = 0.0, pctUrgente = 0.0, sobrepeso = 0.0, tarifaZona;

    cout << "SISTEMA DE COBRO DE ENVIO" << endl;
    cout << "Ingrese la zona de destino " << endl;
    cout << "\n 1: Local/Urbana($5.00)" << endl;
    cout << "\n 2: Nacional($10.00)" << endl;
    cout << "\n 3: America del Sur($20.00)" << endl;
    cout << "\n 4: Internacional/Resto del mundo($35.00)" << endl;
    cin >> destino;

    cout << "Ingrese el peso total del paquete en kilogramos" << endl;
    cin >> kilos;

    if (kilos <= 0 || kilos > 50) {
        cout << "ERROR: El peso del paquete no debe de ser menor a cero (kg) o mayor a 50 (kg) ";
        return 1;
    }
    else {
        cout << "Tipo de entrega Express/Prioritaria (1,si o 0,no)" << endl;
        cin >> urgencia;
        cout << "Tipo de cliente: (1,Corporativo/frecuente o 0,Particular) " << endl;
        cin >> perfil;

        if (urgencia == 1) pctUrgente = 0.25;
        if (kilos > 15) sobrepeso = 12;
        if (perfil == 1) pctRebaja = 0.10;

        switch (destino) {
            case 1: tarifaZona = 5; break;
            case 2: tarifaZona = 10; break;
            case 3: tarifaZona = 20; break;
            case 4: tarifaZona = 35; break;
            default: cout << "ERROR: Zona del destino no valido" << endl; return 1;
        }

        double valorUrgente = tarifaZona * pctUrgente;
        double sobrecargo = sobrepeso + valorUrgente;
        double subtotal = tarifaZona + valorUrgente;
        double valorRebaja = subtotal * pctRebaja;
        double totalFinal = subtotal - valorRebaja;

        cout << fixed << setprecision(2);
        cout << "\n Boleta de Tarifa de envio" << endl;
        cout << "Codigo de zona elegida: " << destino << endl;
        cout << "Costo base por peso: " << tarifaZona << endl;
        cout << "Multas por exceso de peso: " << sobrepeso << endl;
        cout << "Recargo express: " << valorUrgente << endl;
        cout << "Descuento corporativo: " << valorRebaja << endl;
        cout << "Monto Final: " << totalFinal << endl;
    }
    return 0;
}
