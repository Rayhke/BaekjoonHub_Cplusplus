#include <iostream>
using namespace std;

int main() {
	int a, b = 0; string s;
	cin >> s;
	for (int n = 0; s[n] != '\0'; n++) {
		a = s[n]; a = a - 64;
		if ('A' <= s[n] && s[n] <= 'Z') {
			if (0 < a && a < 4) { b += 3; }
			else if (3 < a && a < 7) { b += 4; }
			else if (6 < a && a < 10) { b += 5; }
			else if (9 < a && a < 13) { b += 6; }
			else if (12 < a && a < 16) { b += 7; }
			else if (15 < a && a < 20) { b += 8; }
			else if (19 < a && a < 23) { b += 9; }
			else { b += 10; }
		}
	}
	cout << b;
	return 0;
}