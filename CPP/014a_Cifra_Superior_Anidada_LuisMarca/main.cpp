#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Ingrese el valor de A" << endl;
    cin >> n1;
    cout << "Ingrese el valor de B" << endl;
    cin >> n2;
    cout << "Ingrese el valor de C" << endl;
    cin >> n3;

    if (n1 >= n2) {
        if (n1 >= n3) {
            cout << "El numero mayor es: " << n1 << endl;
        } else {
            cout << "El numero mayor es: " << n3 << endl;
        }
    }
    else if (n2 >= n3) {
        cout << "El numero mayor es: " << n2 << endl;
    }
    else {
        cout << "El numero mayor es: " << n3 << endl;
    }
    return 0;
}
