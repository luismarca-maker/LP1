#include <iostream>
using namespace std;

int main() {
    int turno = 1;
    int sumaNones = 0;

    while (turno <= 10) {
        cout << "Numero: " << turno << endl;
        if (turno % 2 != 0)
            sumaNones = sumaNones + turno;
        turno = turno + 1;
    }

    cout << "La suma total  de los numeros pares es: " << sumaNones << endl;
    return 0;
}
