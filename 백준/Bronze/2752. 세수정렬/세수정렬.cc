#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c;
	if (a == b && a == c && b == c) { cout << a << " " << b << " " << c << endl; return 0; }
	d = (a > b) ? a : b; d = (d > c) ? d : c;
	e = (a < b) ? a : b; e = (e < c) ? e : c;

	cout << e << " ";
	if (e < a && a < d) { cout << a << " "; }
	else if (e < b && b < d) { cout << b << " "; }
	else { cout << c << " "; }
	cout << d << endl;
	return 0;
}