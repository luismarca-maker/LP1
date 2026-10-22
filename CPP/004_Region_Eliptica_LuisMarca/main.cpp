#include <iostream>
using namespace std;

int main() {
    const double PI_ELIPSE = 3.14159265358979;
    double ejeLargo, ejeCorto, region;

    cout << "Ingrese el semieje mayor: ";
    cin >> ejeLargo;
    cout << "Ingrese el semieje menor: ";
    cin >> ejeCorto;

    region = PI_ELIPSE * ejeLargo * ejeCorto;

    cout << "El area de la elipse es: " << region << endl;
    return 0;
}
