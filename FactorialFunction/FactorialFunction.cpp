
#include <iostream>

using namespace std;

int Factorial(int x) {
    int f = 1;
    if (x >= 0) {        
        while (x > 0) {
            f *= x;
            --x;
        }
    }
    return f;
}

int main()
{
    int value;

    cin >> value;

    cout << Factorial(value);

    return 0;
}

