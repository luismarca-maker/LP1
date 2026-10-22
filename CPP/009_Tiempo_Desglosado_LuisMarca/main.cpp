#include <iostream>
using namespace std;

int main() {
    int totalSeg, hh, mm, ss;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> totalSeg;

    hh = totalSeg / 3600;
    mm = (totalSeg % 3600) / 60;
    ss = totalSeg % 60;

    cout << "Equivale a: " << hh << " horas, "
         << mm << " minutos y "
         << ss << " segundos" << endl;
    return 0;
}
