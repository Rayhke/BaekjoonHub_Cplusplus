#include <iostream>
using namespace std;

int main() {
	int a[100] = {}, b, c, d = 0, e = 0, N, M;
	cin >> N >> M;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	for (int n = 0; n < N - 1; n++) {
		b = n;
		for (int m = n + 1; m < N; m++) {
			if (a[b] < a[m]) { b = m; }
		}
		c = a[n];
		a[n] = a[b];
		a[b] = c;
	}
	for (int n = 0; n < N; n++) {
		for (int m = n + 1; m < N; m++) {
			for (int l = m + 1; l < N; l++) {
				d = a[n] + a[m] + a[l];
				if (d <= M && d > e) { e = d; }
				else if (d < e) { break; }
			}
		}
	}
	if (e != 0) { cout << e; }
	return 0;
}