#include <iostream>
using namespace std;

int main() {
    float lado, alto, extension;

    cout << "Sistema de calculo de area de un triangulo" << endl;
    cout << "Ingrese la base: ";
    cin >> lado;
    cout << "Ingrese la altura: ";
    cin >> alto;

    extension = (lado * alto) / 2;

    cout << "El area del triangulo es: " << extension << endl;
    return 0;
}
