#include <iostream>

using namespace std;

int main()
{
    int cuadricula[2][3] = {{14, 15, 16}, {8, 13, 20}};

    cout << "ARREGLO BIDIMENSIONAL MATRIZ" << endl;
    cout << "Notas del estudiante  " << cuadricula[0][1] << endl;

    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++) {
            cout << cuadricula[f][c] << "\t";
        }
        cout << endl;
    }

    return 0;
}
