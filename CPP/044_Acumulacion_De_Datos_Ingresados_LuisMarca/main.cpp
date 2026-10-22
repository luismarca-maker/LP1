#include <iostream>
using namespace std;

int main()
{
    int total = 0, dato = 0;

    do {
        cout << "Numero :" << dato << endl;
        cin >> dato;
        total = total + dato;
        dato = dato + 1;
    } while (dato <= 10);

    return 0;
}
