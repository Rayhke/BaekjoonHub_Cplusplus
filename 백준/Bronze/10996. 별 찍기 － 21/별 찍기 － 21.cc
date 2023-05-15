#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int n = 0; n < a; n++) {
		if ((a % 2) == 0) {
			for (int m = 0; m < (a / 2); m++) { cout << "* "; } cout << "\n";
			for (int m = 0; m < (a / 2); m++) { cout << " *"; } cout << "\n";
		}
		else if ((a % 2) == 1) {
			for (int m = 0; m < (a / 2) + 1; m++) { cout << "* "; } cout << "\n";
			for (int m = 0; m < (a / 2); m++) { cout << " *"; } cout << "\n";
		}
	}
	return 0;
}