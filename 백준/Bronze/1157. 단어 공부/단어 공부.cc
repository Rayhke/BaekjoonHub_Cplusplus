#include <iostream>
using namespace std;

int main() {
	int a[26] = {}, b, c, m = 0, l;
	char d; string e;
	cin >> e;
    l = size(e);
	for (int n = 0; n < l; n++) {
		b = e[n];
		if (64 < b && b < 91) { a[b - 65] += 1; }
		else if (96 < b && b < 123) { a[b - 97] += 1; }
	}
	for (int n = 0; n < 26; n++) { if (a[n] > m) { m = a[n]; c = n; } }
	for (int n = 0; n < 26; n++) {
		if (n == c) { continue; }
		if (m == a[n]) { c = -1; break; }
	}
	if (c != -1) { d = c + 65; cout << d; }
	else { cout << "?"; }
	return 0;
}