// MinimalString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// � ����������� ������ ���� ��� ������, ���������� ��������.
// ������ ������ ������� �� �������� ��������� ���� � ����� �����
// �� ����� 30 ��������. �������� � ����������� �����
// ����������������� ����������� �� ���.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	// ���������� ���������� ���� "String"
	string firstRow, secondRow, thirdRow;
	// ���� ���������� ���� "String" ����� ������
	cin >> firstRow >> secondRow >> thirdRow;

	// �������� ���������, ������� ��������� ����� ����������� ������
	if ((firstRow < secondRow) && (firstRow < thirdRow)) {
		cout << firstRow << endl;
	}
	else if ((secondRow < firstRow) && (secondRow < thirdRow)) {
		cout << secondRow << endl;
	}
	else if ((thirdRow < firstRow) && (thirdRow < secondRow)) {
		cout << thirdRow << endl;
	}
	else {
		cout << "Error" << endl;
	}

	system("PAUSE");

	return 0;
}
