#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int contador = 1, resultado = 0;
    do {
        cout << "Numero :" << contador << endl;
        resultado = contador + 1;
        contador = contador + 1;
    } while (contador <= 10);

    cout << "La suma total es : " << resultado;

    return 0;
}
