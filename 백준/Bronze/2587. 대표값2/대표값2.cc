#include <iostream>
using namespace std;

int main() {
	int a[5] = {}, b, c, d = 0;
	for (int n = 0; n < 5; n++) { cin >> a[n]; d += a[n]; }
	for (int n = 0; n < 5; n++) {
		b = n;
		for (int m = n + 1; m < 5; m++) {
			if (a[b] > a[m]) { b = m; }
		}
		c = a[n]; a[n] = a[b]; a[b] = c;
	}
	cout << (double)d / 5 << endl << a[2];
	return 0;
}