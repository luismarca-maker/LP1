#include <iostream>
using namespace std;

int main() {
    int primero, segundo, tercero;

    cout << "Ingrese el valor de A: ";
    cin >> primero;
    cout << "Ingrese el valor de B: ";
    cin >> segundo;
    cout << "Ingrese el valor de C: ";
    cin >> tercero;

    if (primero >= segundo && primero >= tercero)
        cout << "El numero mayor es: " << primero << endl;
    else if (segundo >= primero && segundo >= tercero)
        cout << "El numero mayor es: " << segundo << endl;
    else
        cout << "El numero mayor es: " << tercero << endl;
    return 0;
}
