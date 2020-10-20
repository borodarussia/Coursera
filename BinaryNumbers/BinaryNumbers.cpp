// Ќа вход дано целое положительное число N.
// его в двоичной системе счислени€ без ведущих нулей.


#include <iostream>

using namespace std;

int main()
{
    int decimaValue;
    string binaryValue;
    cin >> decimaValue;
    while (decimaValue > 0) {
        if (decimaValue % 2 == 1)
        {
            binaryValue += "1";
        }
        else {
            binaryValue += "0";
        }
        decimaValue = decimaValue / 2;
    }

    cout << binaryValue << endl;

    return 0;
}
