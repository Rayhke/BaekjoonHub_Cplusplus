#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e[100] = {}, t;
	cin >> t;
	for (int n = 0; n < t; n++) {
		cin >> a >> b >> c;
		d = (a < b) ? a : b; d = (d < c) ? d : c;
		for (int m = 1; m <= d; m++) { e[n] += 1; }
	}
	for (int n = 0; n < t; n++) { cout << e[n] << '\n'; }
	return 0;
}