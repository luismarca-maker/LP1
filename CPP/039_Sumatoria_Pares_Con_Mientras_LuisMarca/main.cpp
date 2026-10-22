#include <iostream>
using namespace std;

int main() {
    int indice = 1;
    int sumaPares = 0;

    while (indice <= 10) {
        cout << "Numero: " << indice << endl;
        if (indice % 2 == 0)
            sumaPares = sumaPares + indice;
        indice = indice + 1;
    }

    cout << "La suma total  de los numeros pares es: " << sumaPares << endl;
    return 0;
}
