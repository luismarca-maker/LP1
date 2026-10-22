#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int cuenta = 1;
    do {
        cout << "Numero :" << cuenta << endl;
        cuenta = cuenta + 1;
    } while (cuenta <= 10);

    return 0;
}
