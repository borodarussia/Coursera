
#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string w) {
    string partOne, partTwo;
    for (int i = 0; i <= w.length() / 2; ++i) {
        partOne += w[i];
        partTwo += w[(w.length() - 1) - i];
    }
    if (partOne == partTwo) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string word;
    
    cin >> word;

    cout << IsPalindrom(word) << endl;

    return 0;
}
