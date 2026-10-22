#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int puntajes[5] = {2, 14, 15, 18, 20};

    cout << "ARREGLO UNIDIMENSIONAL\n";
    cout << "Primera nota indice 0: " << puntajes[0] << endl;
    cout << "Ultima nota indice 4: " << puntajes[4] << endl;

    cout << "LA DE TODAS LAS NOTAS";
    for (int pos = 0; pos < 5; pos++)
        cout << "Nota en indice: [" << pos << "] " << puntajes[pos] << endl;

    return 0;
}
