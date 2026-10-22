#include <iostream>
using namespace std;

int main() {
    int total = 0;

    cout << "SUMAR NUMEROS DEL 1 AL 10" << endl;

    for (int k = 1; k <= 10; k++) {
        cout << k << endl;
        total = total + k;
    }

    cout << "La suma es: " << total << endl;
    return 0;
}
