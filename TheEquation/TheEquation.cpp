// TheEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// На вход вашей программы в стандартном потоке ввода подаются
// действительные коэффициенты A, B и C уравнения Ax² + Bx + C = 0.
// Выведите все его различные действительные корни в поток вывода
// в любом порядке, при этом разделяя корни пробелами.
// Гарантируется, что хотя бы один из коэффициентов уравнения не
// равен нулю.

#include <iostream>

using namespace std;

int main()
{
    // Объявление переменных типа "Double" для коэффициентов уравнения
    double constA, constB, constC;
    // Ввод переменных типа "Double" через пробел
    cin >> constA >> constB >> constC;

    // Условие для вычисления корней в уравнении
    // Условие - является ли уравнение квадратным
    if (constA != 0) {
        double discr;
        discr = pow(constB, 2) - 4 * constA * constC;
        // Проверка на количество корней - D > 0 -> два корня
        if (discr > 0) {
            discr = sqrt(discr);
            double firstRoot, secondRoot;
            firstRoot = (-constB + discr) / (2 * constA);
            secondRoot = (-constB - discr) / (2 * constA);
            cout << firstRoot << " " << secondRoot << endl;
        }
        // Проверка на количество корней - D = 0 -> один корень
        else if (discr == 0) {
            double root;
            root = (-constB) / (2 * constA);
            cout << root << endl;
        }
        // Проверка на количество корней - D < 0 -> корней нет
        else
        {
            cout << "Error, D < 0" << endl;
        }
    }
    // Проверка на линейное уравнение
    else if ((constA == 0) && (constB != 0)) {
        double root;
        root = -constC / constB;
        cout << root << endl;
    }
    // Уравнение отсутствует, или это прямая параллельная оси абсцисс и корней не имеет
    else {
        cout << "Root for this initial data not found" << endl;
    }

    return 0;
}