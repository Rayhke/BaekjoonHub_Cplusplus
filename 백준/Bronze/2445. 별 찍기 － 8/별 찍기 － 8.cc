#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int a = 1; a <= (2 * num) - 1; a++) {
		if (a <= num) {
			for (int b = 0; b < a; b++) cout << "*";
			for (int c = 0; c < ((num - a) * 2); c++) cout << " ";
			for (int d = 0; d < a; d++) cout << "*";
			cout << "\n";
		}
		else {
			for (int b = 1; b < (((2 * num) + 1) - a); b++) cout << "*";
			for (int c = 0; c < (a - num) * 2; c++) cout << " ";
			for (int d = 1; d < (((2 * num) + 1) - a); d++) cout << "*";
			cout << "\n";
		}
	}
	return 0;
}