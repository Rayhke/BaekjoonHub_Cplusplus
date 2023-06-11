#include <iostream>
using namespace std;

inline int s(int b, int c, int d, int e) { return ((d - b) * (e - c)); }

int main() {
	int a[101][101] = {}, b = 101, c = 101, d = 0, e = 0, f = 0, x_s, y_s, x_m, y_m;
	for (int n = 0; n < 4; n++) {
		cin >> x_s >> y_s >> x_m >> y_m;
		b = (x_s < b) ? x_s : b; c = (y_s < c) ? y_s : c;
		d = (x_m > d) ? x_m : d; e = (y_m > e) ? y_m : e;
		for (int m = y_s; m < y_m; m++) {
			for (int l = x_s; l < x_m; l++) {
				a[m][l] = 1;
			}
		}
	}
	for (int n = e - 1; n > c - 1; n--) {
		for (int m = b; m < d; m++) {
			if (a[n][m] != 1) { f = f + 1; };
		}
	}
	cout << s(b, c, d, e) - f;
	return 0;
}