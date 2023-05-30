#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b[3] = {}, c, d, e[100000] = {};
	cin >> a;
	for (int n = 0; n < a; n++) {
		for (int m = 0; m < 3; m++) { cin >> b[m]; }
		for (int m = 0; m < 2; m++) {
			c = m;
			for (int l = m + 1; l < 3; l++) {
				if (b[c] > b[l]) { c = l; }
			}
			d = b[m];
			b[m]=b[c];
			b[c] = d;
		}
		e[n] = (pow(b[2], 2) == pow(b[1], 2) + pow(b[0], 2)) ? 1 : 0;
	}
	for (int n = 0; n < a; n++) {
		cout << "Scenario #" << n + 1 << ":\n";
		if (e[n] == 1) { cout << "yes\n\n"; }
		else { cout << "no\n\n"; }
	}
	return 0;
}