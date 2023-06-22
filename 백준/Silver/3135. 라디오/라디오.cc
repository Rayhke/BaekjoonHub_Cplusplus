#include <iostream>
using namespace std;

inline int s(int p, int q, int r) { return ((p - q) < r) ? (p - q) : r; }

int main() {
	int a, b, c, d, e = 1000;
	cin >> a >> b >> c;
	a = (a > b) ? (a - b) : (b - a);
	for (int n = 0; n < c; n++) {
		cin >> d;
		if (d > b) { e = s(d, b, e); }
		else { e = s(b, d, e); }
	}
    e++;
	if (a < e) { cout << a; }
	else { cout << e; }
	return 0;
}