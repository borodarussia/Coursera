// Реализуйте функцию void Reverse(vector<int>& v), 
// которая переставляет элементы вектора в обратном порядке.


#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& values) {
    vector<int> bulb;
    for (int i = 0; i < values.size(); ++i) {
        bulb.push_back(values[values.size() - 1 - i]);
    }
    values.clear();
    values = bulb;
}

int main()
{
    vector<int> values = { 1, 2, 3, 4, 5 , 6 };

    Reverse(values);

    for (auto v : values) {
        cout << v << " ";
    }

    return 0;
}
