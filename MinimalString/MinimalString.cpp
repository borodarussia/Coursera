// MinimalString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// В стандартном потоке даны три строки, разделённые пробелом.
// Каждая строка состоит из строчных латинских букв и имеет длину
// не более 30 символов. Выведите в стандартный вывод
// лексикографически минимальную из них.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	// Объявление переменных типа "String"
	string firstRow, secondRow, thirdRow;
	// Ввод переменных типа "String" через пробел
	cin >> firstRow >> secondRow >> thirdRow;

	// Операция сравнения, которая выполняет поиск минимальной строки
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
