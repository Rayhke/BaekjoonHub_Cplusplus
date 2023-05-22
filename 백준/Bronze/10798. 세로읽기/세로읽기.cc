#include <iostream>
using namespace std;

int main() {
	int a[5][15] = {};
	char c[1]; string s;
	for (int n = 0; n < 5; n++) {
		cin >> s;
		for (int m = 0; s[m] != '\0'; m++) { a[n][m] = s[m]; }
		s = "";
	}
	for (int n = 0; n < 15; n++) {
		for (int m = 0; m < 5; m++) {
			if (a[m][n] != 0) {
				c[0] = a[m][n];
				cout << c[0];
			}
		}
	}
	return 0;
}