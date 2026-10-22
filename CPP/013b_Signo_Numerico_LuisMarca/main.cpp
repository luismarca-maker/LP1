#include <iostream>
using namespace std;

int main() {
    float valor;

    cout << "Ingrese un numero: ";
    cin >> valor;

    if (valor > 0) {
        cout << "El numero es positivo." << endl;
    } else if (valor < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es neutro." << endl;
    }
    return 0;
}
