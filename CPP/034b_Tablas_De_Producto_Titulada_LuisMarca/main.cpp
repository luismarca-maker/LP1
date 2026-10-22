#include <iostream>

using namespace std;

int main()
{
    for (int base = 1; base <= 10; base++) {
        cout << "Tabla del : " << base << endl;

        for (int factor = 1; factor <= 10; factor++) {
            cout << base << " x " << factor << " = " << base * factor << endl;
        }
    }

    return 0;
}
