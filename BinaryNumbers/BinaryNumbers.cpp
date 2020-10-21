// На вход дано целое положительное число N.
// Выведите его в двоичной системе счисления без ведущих нулей.


#include <iostream>

using namespace std;

int main()
{
    int decimaValue;
    string binaryValueReverse = "";
    cin >> decimaValue;
    while (decimaValue > 1) {
        if (decimaValue % 2 == 0)
        {
            binaryValueReverse += "0";
        }
        else {
            binaryValueReverse += "1";
        }
        decimaValue /= 2;
    }

    binaryValueReverse += "1";

    for (int i = binaryValueReverse.length() - 1; i >= 0; --i) {
        cout << binaryValueReverse[i];
    }

    return 0;
}
