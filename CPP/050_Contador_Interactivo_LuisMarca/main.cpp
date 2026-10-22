#include <iostream>

using namespace std;

int main()
{
    int numero = 1;
    char continuar;

    do {
        cout << "Numero: " << numero << endl;
        numero = numero + 1;
        cout << "Desea imprimir el siguiente numero? (s/n): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
