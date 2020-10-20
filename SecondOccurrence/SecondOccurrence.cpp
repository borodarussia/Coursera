
#include <iostream>
#include <string>

using namespace std;

int main() {
	string checkRow = "sadgdsghgf";
	int fNo = 0;

	for (int i = 0; i < checkRow.size(); ++i) {
		if (checkRow[i] == 'f') {
			++fNo;
		}
		if (fNo >= 2) {
			cout << i;
			break;
		}
	}

	if (fNo == 0) {
		cout << "-2";
	}
	else if (fNo == 1) {
		cout << "-1";
	}

	return 0;
}