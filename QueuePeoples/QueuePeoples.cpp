// Люди стоят в очереди, но никогда не уходят из её начала, зато могут приходить в конец и уходить оттуда.
// Более того, иногда некоторые люди могут прекращать и начинать беспокоиться из - за того, что очередь не продвигается.
//
// Будем считать, что люди в очереди нумеруются целыми числами, начиная с 0.
//
// Реализуйте обработку следующих операций над очередью :
//
// WORRY i : пометить i - го человека с начала очереди как беспокоящегося;
// QUIET i : пометить i - го человека как успокоившегося;
// COME k : добавить k спокойных человек в конец очереди;
// COME - k: убрать k человек из конца очереди;
// WORRY_COUNT: узнать количество беспокоящихся людей в очереди.
// Изначально очередь пуста.
//
// Формат ввода
// Количество операций Q, затем описания операций.
//
// Для каждой операции WORRY i и QUIET i гарантируется, что человек с номером i существует в очереди на момент операции.
//
// Для каждой операции COME - k гарантируется, что k не больше текущего размера очереди.
//
// Формат вывода
// Для каждой операции WORRY_COUNT выведите одно целое число — количество беспокоящихся людей в очереди.


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