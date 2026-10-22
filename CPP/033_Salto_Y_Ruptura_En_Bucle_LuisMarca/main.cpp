#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    for (int n = 1; n <= 10; n++) {
        if (n == 3) {
            continue;
        }
        if (n == 8) {
            break;
        }

        cout << "Numero " << n << endl;
    }
    return 0;
}
