#include <iostream>
using namespace std;

int main() {
	int a[26] = {}, b, c = 0, d, p, q = 0;
	cin >> b; string s;
	for (int n = 0; n < b; n++) {
		cin >> s; c = 0; p = 0;
		while (s[c] != '\0') {
			d = a[s[c] - 97];
			if (d == 0) { a[s[c] - 97]++; }
			else if (d != 0 && s[c] != s[c - 1]) { p = -1; break; }
			c = c + 1;
		}
		if (p != -1) { q++; }
		for (int n = 0; n < 26; n++) { a[n] = 0; }
	}
	cout << q;
	return 0;
}