#include <iostream>
using namespace std;

int main() {
	int a[3], b[3], c, d, e = 0, f = 0, g = 0, h = 0;
	cin >> a[0] >> b[0]; c = a[0]; d = b[0];
	for (int n = 1; n < 3; n++) {
		cin >> a[n] >> b[n];
		if (a[n] != c) { e = n; g++; }
		if (b[n] != d) { f = n; h++; }
	}
	if (g == 2) { cout << a[0] << " "; }
	else { cout << a[e] << " "; }
	if (h == 2) { cout << b[0]; }
	else { cout << b[f]; }
	return 0;
}