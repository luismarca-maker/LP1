#include <iostream>
using namespace std;

int main()
{
    int multiplicador = 1, limite = 10;

    cout << "TABLA DEL 7" << endl;

    do {
        cout << "7 x " << multiplicador << " = " << multiplicador * 7 << endl;
        multiplicador = multiplicador + 1;
    } while (multiplicador <= limite);

    return 0;
}
