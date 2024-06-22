#include <iostream>
using namespace std;

int main() {
	int num, Max = 0; string input, Value;
	for (int n = 0; n < 7; n++) {
		cin >> input >> num;
		if (Max < num) {
			Max = num; Value = input;
		}
	}
	cout << Value;
	return 0;
}