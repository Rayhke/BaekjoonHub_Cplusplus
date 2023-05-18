#include <iostream>
using namespace std;

int main() {
	int a[101] = {}, n, m, o, p, q;
	cin >> n >> m;
	for (int b = 1; b <= n; b++) { a[b] = b; }
	for (int c = 0; c < m; c++) {
		cin >> o >> p;
		for (int d = 0; d <= (p - o) / 2; d++) {
			q = a[o + d];
			a[o + d] = a[p - d];
			a[p - d] = q;
		}
	}
	for (int d = 1; d <= n; d++) { cout << a[d] << " "; }
	return 0;
}