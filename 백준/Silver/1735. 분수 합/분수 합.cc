#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int a[2], b[2], c, d;
	cin >> a[0] >> a[1] >> b[0] >> b[1];
	c = lcm(a[1], b[1]);
	a[0] *= c / a[1]; b[0] *= c / b[1];
	d = gcd(a[0] + b[0], c);
	if (d != 1) { cout << (a[0] + b[0]) / d << ' ' << c / d; }
	else { cout << a[0] + b[0] << ' ' << c; }
	return 0;
}
