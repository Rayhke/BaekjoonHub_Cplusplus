#include <iostream>
using namespace std;

int main() {
	int a[100][100] = {}, b, c = 0, d = 0, e = 101, f = 0, g = 101, h = 0, i = 0;
	cin >> b;
	for (int n = 0; n < b; n++) {
		cin >> c >> d;
		for (int m = 0; m < 10; m++) {
			for (int l = 0; l < 10; l++) {
				a[c + l][d + m] += 1;
			}
		}
		e = (c < e) ? c : e; f = ((c + 10) > f) ? (c + 10) : f;
		g = (d < g) ? d : g; h = ((d + 10) > h) ? (d + 10) : h;
	}
	for (int n = h - 1; n >= g; n--) {
		for (int m = e; m < f; m++) {
			if (a[m][n] == 0) { i++; }
		}
	}
	cout << ((f - e) * (h - g)) - i;
	return 0;
}