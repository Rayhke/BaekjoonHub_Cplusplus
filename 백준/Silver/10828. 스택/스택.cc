#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, d[10000] = {};
	string s;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> s;
		if (s == "push") {
			cin >> b;
			if (d[c] != 0) {
				c = c + 1;
				d[c] = b;
			}
			else { d[c] = b; }
		}
		else if (s == "pop") {
			if (d[c] != 0) {
				cout << d[c] << '\n'; d[c] = 0;
				if (c > 0) { c = c - 1; }
			}
			else { cout << -1 << '\n'; }
		}
		else if (s == "size") {
			if (d[0] != 0) { cout << c + 1 << '\n'; }
			else { cout << c << '\n'; }
		}
		else if (s == "empty") {
			if (d[c] == 0) { cout << 1 << '\n'; }
			else { cout << 0 << '\n'; }
		}
		else if (s == "top") {
			if (d[c] != 0) { cout << d[c] << '\n'; }
			else { cout << -1 << '\n'; }
		}
		s = "";
	}
	return 0;
}
