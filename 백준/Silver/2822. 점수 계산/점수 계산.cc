#include <iostream>
using namespace std;

int main() {
	int a[8] = {}, b[8] = {}, c, d, e[8] = {};
	for (int n = 0; n < 8; n++) { cin >> a[n]; b[n] = a[n]; }
	for (int n = 0; n < 7; n++) {
		c = n;
		for (int m = n + 1; m < 8; m++) {
			if (a[c] < a[m]) { c = m; }
		}
		d = a[n];
		a[n] = a[c];
		a[c] = d;
	}
	c = 0;
	for (int n = 0; n < 5; n++) { c = c + a[n]; }cout << c << '\n';
	for (int n = 0; n < 5; n++) {
		for (int m = 0; m < 8; m++) {
			if (b[m] == a[n]) { e[m] = m + 1; }
		}
	}
	for (int n = 0; n < 8; n++) { if (e[n] != 0) { cout << n + 1 << " "; } }
	return 0;
}