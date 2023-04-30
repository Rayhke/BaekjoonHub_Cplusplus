#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c;
	if (a == b && a == c && b == c) { cout << a; }
	else {
		f = a + b + c;
		d = (a < b) ? a : b; d = (d < c) ? d : c;
		e = (a > b) ? a : b; e = (e > c) ? e : c;
		cout << (f - (d + e)) << endl;
	}
	return 0;
}