#include <iostream>
using namespace std;

int main() {
    int paso = 1;
    int acumulado = 0;

    while (paso <= 10) {
        cout << "Numero: " << paso << endl;
        acumulado = acumulado + paso;
        paso = paso + 1;
    }

    cout << "La suma total es: " << acumulado << endl;
    return 0;
}
