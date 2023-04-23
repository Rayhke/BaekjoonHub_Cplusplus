#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c;
	if (a == b && a == c && b == c) { cout << a << " " << b << " " << c << endl;}
	else {
		d = (a > b) ? a : b; d = (d > c) ? d : c;
		e = (a < b) ? a : b; e = (e < c) ? e : c;
		cout << e << " " << ((a + b + c) - (d + e)) << " " << d << endl;
	}
	return 0;
}