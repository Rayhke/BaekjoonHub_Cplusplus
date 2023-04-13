#include <iostream>
using namespace std;

int main() {
	int a, b, c, n, E = 0;
	int L[1002];
	cin >> n;
	for (int m = 0; m < n; m++) {
		cin >> a >> b >> c;
		if (a == b && a == c) {
			L[m] = (10000 + (a * 1000));
		}
		else if (a == b || a == c || b == c) {
			if (a == b) L[m] = (1000 + (a * 100));
			else if (a == c) L[m] = (1000 + (a * 100));
			else if (b == c) L[m] = (1000 + (b * 100));
		}
		else {
			a = (a > b) ? a : b;
			a = (a > c) ? a : c;
			L[m] = (a * 100);
		}
		if (m > 0) {
			E = (L[m] > E) ? L[m] : E;
		}
	}
	cout << E;
	return 0;
}