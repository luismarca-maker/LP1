#include <iostream>
using namespace std;

int main() {
    int uno, dos, tres;

    cout << "Ingrese el valor de A: ";
    cin >> uno;
    cout << "Ingrese el valor de B: ";
    cin >> dos;
    cout << "Ingrese el valor de C: ";
    cin >> tres;

    if (uno >= dos) {
        if (uno >= tres) {
            cout << "El numero mayor es: " << uno << endl;
        } else {
            cout << "El numero mayor es: " << tres << endl;
        }
    }
    else {
        if (tres >= dos) {
            cout << "El numero mayor es: " << tres << endl;
        } else {
            cout << "El numero mayor es: " << dos << endl;
        }
    }
    return 0;
}
