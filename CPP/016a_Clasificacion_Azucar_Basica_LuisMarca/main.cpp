#include <iostream>
using namespace std;

int main() {
    float nivelAzucar;
    int grupo;

    cout << "Ingrese el nivel de glucosa en sangre (mg/dL): ";
    cin >> nivelAzucar;

    if (nivelAzucar < 70) grupo = 1;
    else if (nivelAzucar < 100) grupo = 2;
    else if (nivelAzucar < 126) grupo = 3;
    else grupo = 4;

    switch (grupo) {
        case 1: cout << "\nResultado: HIPOGLUCEMIA" << endl; break;
        case 2: cout << "\nResultado: GLUCOSA NORMAL" << endl; break;
        case 3: cout << "\nResultado: GLUCOSA ELEVADA / PREDIABETES" << endl; break;
        case 4: cout << "\nResultado: POSIBLE DIABETES" << endl; break;
        default: cout << "Categoria no valida." << endl;
    }
    return 0;
}
