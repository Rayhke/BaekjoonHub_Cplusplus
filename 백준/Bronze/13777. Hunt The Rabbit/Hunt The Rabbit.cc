#include <iostream>
using namespace std;

void s(int a[], int c) {
	int mn = 0, md, mx = 49;
	while (mn <= mx) {
		md = (mn + mx) / 2;
		if (a[md] == c) { cout << a[md] << '\n'; return; }
		else if (a[md] < c) { cout << a[md] << " "; mn = md + 1; }
		else { cout << a[md] << " "; mx = md - 1; }
	}
	return;
}

int main() {
	int a[50] = {}, b[50] = {}, c, d = 0;
	for (int n = 0; n < 50; n++) { a[n] = n + 1; }
	do {
		cin >> c;
		if (c != 0) { s(a, c); }
	} while (c);
	return 0;
}