#include <iostream>
using namespace std;

int main() {
	int a, b, c, d = 0, e = 1, f[100000] = {};
	cin >> a;
	b = a - 1;
	for (int n = b; n > -1; n--) { cin >> c; f[n] = c; }
	d = f[0];
	for (int n = 1; n < a; n++) {
		if (f[n] > d) { d = f[n]; e++; }
	}
	cout << e;
	return 0;
}