#include <iostream>

using namespace std;

int main()
{
    double startPrice, firstPrice, secondPrice, firstPercent, secondPercent;

    cin >> startPrice >> firstPrice >> secondPrice >> firstPercent >> secondPercent;

    if (startPrice > firstPrice && startPrice <= secondPrice) {
        cout << startPrice * (1 - firstPercent / 100) << endl;
    }
    else if (startPrice > secondPrice) {
        cout << startPrice * (1 - secondPercent / 100) << endl;
    }
    else {
        cout << startPrice << endl;
    }

    system("PAUSE");

    return 0;
}
