#include <iostream>
using namespace std;

int main() {
	int a[1000] = {}, b, c, d;
	cin >> b;
	for (int n = 0; n < b; n++) { cin >> a[n]; }
	for (int n = 0; n < b - 1; n++) {
		c = n;
		for (int m = n + 1; m < b; m++) {
			if (a[c] > a[m]) { c = m; }
		}
		d = a[n];
		a[n] = a[c];
		a[c] = d;
	}
	c = 0, d = 0;
	for (int n = 0; n < b; n++) { c = c + a[n]; d = d + c; }
	cout << d;
	return 0;
}