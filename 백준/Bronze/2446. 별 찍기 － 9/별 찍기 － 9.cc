#include <iostream>
using namespace std;

int main() {
	int n, num;
	cin >> n;
	num = n * 2;
	for (int a = 1; a < num; a++) {
		if (a <= n) {
			for (int b = 1; b < a; b++) cout << " ";
			for (int c = 0; c < ((num + 1) - (a * 2)); c++) cout << "*";
			cout << "\n";
		}
		else {
			for (int b = 1; b < (num - a); b++) cout << " ";
			for (int c = 0; c < ((a * 2) - (num - 1)); c++) cout << "*";
			cout << "\n";
		}
	}
	return 0;
}