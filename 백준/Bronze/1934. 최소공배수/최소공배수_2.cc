#include <iostream>
using namespace std;

int main() {
	int a[1000] = {}, b[1001] = {}, c, d, e, f, g = 1;
	cin >> b[0];
	for (int n = 0; n < b[0]; n++) {
		cin >> c >> d;
		e = (c > d) ? c : d; f = (c < d) ? c : d; g = 1;
		while (1) {
			if ((e * g) % f == 0) { break; }
			g = g + 1;
		}
		b[n + 1] = e * g;
	}
	for (int n = 1; n < b[0] + 1; n++) { cout << b[n] << '\n'; }
	return 0;
}
