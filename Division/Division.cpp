// Division.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// ���� ��� ����� ����� A � B � ��������� �� 0 �� 1 000 000
// ������������. �������� ���������, ������� ��������� �����
// ����� �������� �� ������� A �� B.
//
// ���� B = 0, �������� "Impossible".


#include <iostream>

using namespace std;

int main()
{
    int firstValue, secondValue;

    cin >> firstValue >> secondValue;

    if (secondValue != 0) {
        cout << firstValue / secondValue << endl;
    }
    else {
        cout << "Impossible" << endl;
    }

    system("PAUSE");

    return 0;
}

