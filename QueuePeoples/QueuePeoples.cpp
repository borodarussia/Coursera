// ���� ����� � �������, �� ������� �� ������ �� � ������, ���� ����� ��������� � ����� � ������� ������.
// ����� ����, ������ ��������� ���� ����� ���������� � �������� ������������ �� - �� ����, ��� ������� �� ������������.
//
// ����� �������, ��� ���� � ������� ���������� ������ �������, ������� � 0.
//
// ���������� ��������� ��������� �������� ��� �������� :
//
// WORRY i : �������� i - �� �������� � ������ ������� ��� ��������������;
// QUIET i : �������� i - �� �������� ��� ��������������;
// COME k : �������� k ��������� ������� � ����� �������;
// COME - k: ������ k ������� �� ����� �������;
// WORRY_COUNT: ������ ���������� ������������� ����� � �������.
// ���������� ������� �����.
//
// ������ �����
// ���������� �������� Q, ����� �������� ��������.
//
// ��� ������ �������� WORRY i � QUIET i �������������, ��� ������� � ������� i ���������� � ������� �� ������ ��������.
//
// ��� ������ �������� COME - k �������������, ��� k �� ������ �������� ������� �������.
//
// ������ ������
// ��� ������ �������� WORRY_COUNT �������� ���� ����� ����� � ���������� ������������� ����� � �������.


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int worryCount(const vector<string>& queuePeoples) {
    int worryCount = 0;
    for (string q : queuePeoples) {
        if (q == "WORRY") {
            ++worryCount;
        }
    }
    return worryCount;
}

void addPeople(vector<string>& queuePeoples, int count) {
    if (count <= queuePeoples.size() && count >= 0) {
        for (int i = 0; i < count; ++i) {
            queuePeoples.push_back("COME");
        }
    }
    else {
        cout << "Error, count > size of queue" << endl;
    }  
}

void delPeople(vector<string>& queuePeoples, int count) {
    if ((count < queuePeoples.size()) && (count >= 0)) {
        for (int i = 0; i < count; ++i) {
            queuePeoples.pop_back();
        }
    }
    else {
        cout << "Error, count >= queuePeoples.size()" << endl;
    }
}

void worryPeople(vector<string>& queuePeoples, int nCell) {
    if ((nCell < queuePeoples.size() - 1) && (nCell >= 0)) {
        queuePeoples[nCell] = "WORRY";
    }
    else {
        cout << "queue is smaller" << endl;
    }    
}

void quietPeople(vector<string>& queuePeoples, int nCell) {
    if ((nCell < queuePeoples.size() - 1) && (nCell >= 0)) {
        queuePeoples[nCell] = "QUIET";
    }
    else {
        cout << "queue is smaller" << endl;
    }
}

int main()
{
    int queueOperations, startCount;

    cout << "Input numbers Operations: ";
    cin >> queueOperations;

    cout << "Input start size of queue: ";
    cin >> startCount;

    vector<string> peoplesQueue(startCount, "COME");

    while (queueOperations != 0) {
        int count, nCell;
        cout << "Add peoples numbers: ";
        cin >> count;

        addPeople(peoplesQueue, count);

        for (string s: peoplesQueue) {
            cout << s << " ";
        }
        cout << endl;

        cout << "make worry people numbers: ";
        cin >> nCell;
        worryPeople(peoplesQueue, nCell);

        cout << "make quiet people numbers: ";
        cin >> nCell;
        quietPeople(peoplesQueue, nCell);

        cout << "input value of delete people from queue: ";
        cin >> count;
        delPeople(peoplesQueue, count);

        cout << "\n\n\n***\n\n\n" << worryCount(peoplesQueue) << "\n\n\n***\n\n\n";

        --queueOperations;
    }

    return 0;
}