#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float lado1, lado2, resultado;

    cout << "Sistema de calculo de hipotenusa de un triangulo rectangulo!" << endl;
    cout << "Ingrese el valor del cateto a: ";
    cin >> lado1;
    cout << "Ingrese el valor del cateto b: ";
    cin >> lado2;

    resultado = sqrt(pow(lado1, 2) + pow(lado2, 2));

    cout << "La Hipotenusa es: " << resultado << endl;
    return 0;
}
