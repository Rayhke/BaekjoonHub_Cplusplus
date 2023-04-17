#include <iostream>
using namespace std;

int main() {
	string a, b, c;
	int d, e = 0;
	while (1) {
		cin >> a;
		if (a[0] == '0') { break; }
		d = size(a);
		for (int n = 1; n <= d; n++) { b += a[(d - n)]; }
		for (int m = 0; m < (d / 2); m++) {
			if (a[m] != b[m]) {
				e = 1;
				break;
			}
		}
		if (e == 0) { c += '1'; }
		else { c += '0'; }
		b = ""; e = 0;
	}
	for (int l = 0; c[l] != NULL; l++) {
		if (c[l] == '1') { cout << "yes" << endl; }
		else { cout << "no" << endl; }
	}
	return 0;
}