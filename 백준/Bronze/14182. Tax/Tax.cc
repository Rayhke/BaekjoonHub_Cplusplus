#include <iostream>
using namespace std;

int main() {
	int input;
	while (1) {
		cin >> input;
		if (input == 0) { break; }
		else if (input < 1000001) { cout << input; }
		else if (input < 5000001) { cout << input - (input / 10); }
		else { cout << input - (input / 5); }
		cout << '\n';
	}
	return 0;
}