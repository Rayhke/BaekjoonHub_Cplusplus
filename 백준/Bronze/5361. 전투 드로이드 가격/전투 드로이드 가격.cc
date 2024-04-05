#include <iostream>
using namespace std;

int main() {
	int T; double input, value, arr[] = { 350.34,230.90,190.55,125.30,180.90 };
	cout << fixed; cout.precision(2);
	cin >> T;
	for (int t = 0; t < T; t++) {
		value = 0;
		for (int n = 0; n < 5; n++) {
			cin >> input;
			value += input * arr[n];
		}
		cout << '$' << value << '\n';
	}
	return 0;
}