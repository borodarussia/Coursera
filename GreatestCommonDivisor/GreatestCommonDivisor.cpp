
// В stdin даны два натуральных числа.
// Выведите в stdout их наибольший общий делитель.

#include <iostream>

using namespace std;

int main()
{
    int firstValue, secondValue;

    cin >> firstValue >> secondValue;

    while (firstValue > 0 && secondValue > 0) {
        if (firstValue > secondValue) {
            firstValue = firstValue % secondValue;
        }
        else {
            secondValue = secondValue % firstValue;
        }
    }

    cout << firstValue + secondValue;
    
    return 0;
}

