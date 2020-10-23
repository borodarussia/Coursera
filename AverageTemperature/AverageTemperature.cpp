
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int nDays = 0;

	cin >> nDays;

	vector<int> temperatureDay(nDays);
	vector<int> resultDay;

	int sumTemperature = 0;

	for (int& t : temperatureDay) {
		cin >> t;
		sumTemperature += t;
	}

	int averagedTemperature = sumTemperature / nDays;

	for (int i = 0; i < nDays; ++i) {
		if (temperatureDay[i] > averagedTemperature) {
			resultDay.push_back(i);
		}
	}
	cout << resultDay.size() << endl;

	for (int& r : resultDay) {
		cout << r << endl;
	}

	return 0;
}

