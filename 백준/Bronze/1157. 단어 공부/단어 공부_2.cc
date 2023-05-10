#include <iostream>
using namespace std;

int main() {
	string a; char b; int c[26] = {}, d, e = 0, f = 0, g = 0, h = 0;
	cin >> a;
	for (int n = 0; n < size(a); n++) {
		d = a[n];
		if (96 < d && d < 123) { c[d - 97] += 1; e = c[d - 97]; f = d - 97; }
		else if (64 < d && d < 91) { c[d - 65] += 1; e = c[d - 65]; f = d - 65; }
		if (g < e) { g = e; h = f; }
	}
	for (int n = 0; n < 26; n++) { if (g != c[n] || n == h) { continue; } else { h = -1; break; } }
	if (h != -1) { b = (h + 65); cout << b; }
	else { cout << "?"; }
	return 0;
}
