#include <iostream>
using namespace std;

int main() {
	int a[100] = {}, b, c, d, e, f, g;
	cin >> b;
	for (int n = 0; n < b; n++) { a[n] = n + 1; }
	cin >> c;
	for (int n = 0; n < c; n++) {
		cin >> d >> e >> f;
		for (int m = d; m < f; m++) {
			g = a[d - 1];
			for (int l = d; l < e; l++) { a[l - 1] = a[l]; }
			a[e - 1] = g;
		}
	}
	for (int n = 0; n < b; n++) { cout << a[n] << " "; }
	return 0;
}