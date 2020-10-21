// Напишите функцию UpdateIfGreater,
// которая принимает два целочисленных аргумента :
// first и second.Если first оказался больше second,
// Ваша функция должна записывать в second значение параметра first.
// При этом указанная функция не должна ничего возвращать,
// а изменение параметра second должно быть видно на вызывающей стороне.


#include <iostream>

using namespace std;

void UpdateIfGreater(int firstValue, int& secondValue) {
	if (firstValue > secondValue) {
		secondValue = firstValue;
	}
}

int main()
{
	int firstValue, secondValue;

	cin >> firstValue >> secondValue;
	UpdateIfGreater(firstValue, secondValue);
	cout << secondValue << endl;

	return 0;
}