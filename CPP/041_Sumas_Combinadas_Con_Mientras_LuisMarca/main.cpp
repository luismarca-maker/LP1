#include <iostream>
using namespace std;

int main() {
    int pos = 1;
    int totalPares = 0;
    int totalNones = 0;
    int totalGeneral = 0;

    while (pos <= 10) {
        cout << "Numero: " << pos << endl;
        if (pos % 2 != 0)
            totalNones = totalNones + pos;
        if (pos % 2 == 0)
            totalPares = totalPares + pos;
        totalGeneral = totalGeneral + pos;
        pos = pos + 1;
    }

    cout << "La suma total  de los numeros pares es: " << totalPares << endl;
    cout << "La suma total  de los numeros impares es: " << totalNones << endl;
    cout << "La suma total  de los numeros es: " << totalGeneral << endl;
    return 0;
}
