#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, d = 0, e[100000] = {};
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b;
		if (b != 0) { e[c] = b; c = c + 1; }
		else {
			if (c > 0) { c = c - 1; }
			e[c] = 0;
		}
	}
	for (int n = 0; n < a; n++) { d = d + e[n]; }
	cout << d;
	return 0;
}