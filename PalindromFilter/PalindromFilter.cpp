
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> PalindromFilter(vector<string> startWords, int minLength) {
    
    vector<string> filterWords;

    for (int i = 0; i < startWords.size(); ++i) {
        string word = startWords[i];
        string partOne, partTwo;

        for (int j = 0; j < word.length(); ++j) {
            partOne += word[j];
            partTwo += word[(word.length() - 1) - j];
        }
        if (partOne == partTwo && word.length() >= minLength) {
            filterWords.push_back(word);
        }
    }

    return filterWords;
}

int main()
{
    vector<string> startWords = { "abacaba", "aba", "weew", "bro", "code"};
    
    int minLength = 4;

    vector<string> filterWords = PalindromFilter(startWords, minLength);

    for (int i = 0; i < filterWords.size(); ++i) {
        cout << filterWords[i] << " ";
    }

    return 0;
}