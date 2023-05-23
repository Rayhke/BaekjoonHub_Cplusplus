#include <iostream>
using namespace std;

int main() {
	int a[1000] = {}, b, c, d = 0, e = 0;
	float f, g[1000] = {};
	cin >> b;
	for (int n = 0; n < b; n++) {
		cin >> c;
		for (int m = 0; m < c; m++) { cin >> a[m]; d = d + a[m]; }
		f = (float)d / c;
		for (int m = 0; m < c; m++) { if (a[m] > f) { e++; } }
		f = (float)e / c * 100;
		g[n] = f;
		d = 0; e = 0;
	}
	cout << fixed;
	cout.precision(3);
	for (int n = 0; n < b; n++) { cout << g[n] << "%\n"; }
	return 0;
}