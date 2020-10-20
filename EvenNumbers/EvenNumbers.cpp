
#include <iostream>

using namespace std;

int main()
{
	int firstValue, secondValue;
	cin >> firstValue >> secondValue;

	if (firstValue <= secondValue) {
		while (firstValue <= secondValue) {
			if (firstValue % 2 == 0) {
				cout << firstValue << " ";				
			}
			++firstValue;
		}
	}

	return 0;
}
