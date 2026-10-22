#include <iostream>
using namespace std;

int main() {
    int dato;

    cout << "Ingrese un numero: ";
    cin >> dato;

    if (dato == 0) {
        cout << "El numero es nulo." << endl;
    } else if (dato % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }
    return 0;
}
