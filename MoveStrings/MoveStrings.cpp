// �������� ������� MoveStrings, ������� ��������� ��� ������� �����, source � destination,
// � ���������� ��� ������ �� ������� ������� � ����� �������.
// ����� ���������� ������� ������ source ������ ��������� ������.


#include <iostream>
#include <string>
#include <vector>


using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (auto w : source) {
        destination.push_back(w);
    }
    source.clear();
}

int main()
{
    vector<string> source = {};
    vector<string> destination = { "first", "second", "third" };

    MoveStrings(source, destination);

    for (auto w : source) {
        cout << w << " ";
    }
    cout << "\nVector source\n";

    for (auto w : destination) {
        cout << w << " ";
    }
    cout << "\nVector desination\n";

    return 0;
}
