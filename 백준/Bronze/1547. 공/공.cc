#include <iostream>
using namespace std;

int main() {
	int a[3] = { 1, }, b, c, d, e;
	cin >> b;
	for (int n = 0; n < b; n++) {
		cin >> c >> d;
		e = a[c - 1];
		a[c - 1] = a[d - 1];
		a[d - 1] = e;
	}
	for (int n = 0; n < 3; n++) {
		if (a[n] == 1) { cout << (n + 1); break; }
	}
	return 0;
}