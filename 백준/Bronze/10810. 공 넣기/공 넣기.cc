#include <iostream>
using namespace std;

int main() {
	int a[101] = {}, n, m, o, p, q;
	cin >> n >> m;
	for (int b = 0; b < m; b++) {
		cin >> o >> p >> q;
		for (int c = o; c <= p; c++) { a[c - 1] = q; }
	}
	for (int c = 0; c < n; c++) { cout << a[c] << " "; }
	return 0;
}