// Division.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// Дано два целых числа A и B в диапазоне от 0 до 1 000 000
// включительно. Напишите программу, которая вычисляет целую
// часть частного от деления A на B.
//
// Если B = 0, выведите "Impossible".


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

