// �������� ������� UpdateIfGreater,
// ������� ��������� ��� ������������� ��������� :
// first � second.���� first �������� ������ second,
// ���� ������� ������ ���������� � second �������� ��������� first.
// ��� ���� ��������� ������� �� ������ ������ ����������,
// � ��������� ��������� second ������ ���� ����� �� ���������� �������.


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