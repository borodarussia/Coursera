// Реализуйте функцию vector<int> Reversed(const vector<int>& v),
// возвращающую копию вектора v, в которой числа переставлены в обратном порядке.

#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& values) {
    vector<int> reversedValues;
    for (int i = 0; i < values.size(); ++i) {
        reversedValues.push_back(values[values.size() - 1 - i]);
    }

    return reversedValues;
}

int main()
{
    vector<int> values = { 1, 2, 3, 4, 5 };
    vector<int> reversedValue = Reversed(values);

    for (auto v : reversedValue) {
        cout << v << " ";
    }

    return 0;
}