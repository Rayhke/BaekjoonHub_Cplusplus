#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, d[10000] = {};
	string s;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> s;
		if (s == "push") {										// push(푸시)
			cin >> b; d[c] = b;
			c = c + 1;
		}
		else if (s == "pop") {										// pop(팝)
			if (c > 0 && d[c - 1] != 0) {
				c = c - 1;
				cout << d[c] << '\n';
				d[c] = 0;
			}
			else { cout << -1 << '\n'; }
		}
		else if (s == "size") {										// size(사이즈)
			cout << c << '\n';
		}
		else if (s == "empty") {									// empty
			if ((c > 0 && d[c - 1] == 0) || (c == 0 && d[c] == 0)) { cout << 1 << '\n'; }
			else { cout << 0 << '\n'; }
		}
		else if (s == "top") {										// top(탑)
			if (c > 0 && d[c - 1] != 0) { cout << d[c - 1] << '\n'; }
			else { cout << -1 << '\n'; }
		}
		s = "";
	}
	return 0;
}
