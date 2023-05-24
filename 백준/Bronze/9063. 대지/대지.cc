#include <iostream>
using namespace std;

int main() {
	int a, b, c, d = 10001, e = -10001, f = 10001, g = -10001;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b >> c;
		d = (b < d) ? b : d; e = (b > e) ? b : e;
		f = (c < f) ? c : f; g = (c > g) ? c : g;
	}
	cout << (e - d) * (g - f);
	return 0;
}