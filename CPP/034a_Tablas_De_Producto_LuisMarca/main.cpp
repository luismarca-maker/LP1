#include <iostream>

using namespace std;

int main()
{
    for (int fila = 1; fila <= 10; fila++) {
        for (int col = 1; col <= 10; col++) {
            cout << fila << " x " << col << " = " << fila * col << endl;
        }
    }

    return 0;
}
