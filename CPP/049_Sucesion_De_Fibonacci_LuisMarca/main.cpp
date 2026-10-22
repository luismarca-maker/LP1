#include <iostream>
using namespace std;

int main() {
    int terminos;
    long long previo = 0, actual = 1, siguiente;
    int paso = 1;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> terminos;

    if (terminos > 0) {
        do {
            if (paso == 1) {
                cout << previo << " ";
            } else if (paso == 2) {
                cout << actual << " ";
            } else {
                siguiente = previo + actual;
                previo = actual;
                actual = siguiente;
                cout << siguiente << " ";
            }
            paso++;
        } while (paso <= terminos);
    } else {
        cout << "Por favor, ingrese un numero mayor a 0." << endl;
    }

    return 0;
}
