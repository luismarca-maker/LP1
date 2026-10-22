#include <iostream>
using namespace std;

int main() {
    double total = 0;
    int cantNulos = 0, cantPares = 0, cantImpares = 0, valor = 0;

    cout << "NUMEROS PARES E IMPARES" << endl;

    for (int k = 1; k <= 10; k++) {
        cout << "Ingrese el numero " << k << ": " << endl;
        cin >> valor;
        total = total + valor;

        if (valor == 0) {
            cantNulos += 1;
        }

        if (valor % 2 == 0) {
            cantPares += 1;
        }

        if (valor % 2 == 1) {
            cantImpares += 1;
        }
    }

    cout << "Suma total de numeros : " << total << endl;
    cout << "Total de numeros pares : " << cantPares << endl;
    cout << "Total de numeros impares : " << cantImpares << endl;
    cout << "Total de numeros nulos : " << cantNulos << endl;
    return 0;
}
