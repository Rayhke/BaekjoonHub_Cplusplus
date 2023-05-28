#include <iostream>
using namespace std;

int s(int a[], int c, int n) {
	int x = n - 1;
	while (x > -1) {
		if (a[x] <= c) { break; }
		x--;
	}
	return x;
}

int main() {
	int a[10] = {}, b, c, n = 0, m = 9, l = 0;
	cin >> b >> c;
	for (n = 0; n < b; n++) { cin >> a[n]; }
	m = s(a, c, n);
	while (c) {
		if (a[m] <= c) { l = l + (c / a[m]); c = c % a[m]; }
		else if (m > 0) { m = m - 1; }
	}
	cout << l;
	return 0;
}