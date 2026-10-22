#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double catA, catB, diagonal;

    cout << "Ingrese el cateto ca: ";
    cin >> catA;
    cout << "Ingrese el cateto co: ";
    cin >> catB;

    diagonal = sqrt(catA * catA + catB * catB);

    cout << "La hipotenusa es: " << diagonal << endl;
    return 0;
}
