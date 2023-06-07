#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a;
	int* c = new int[a];
	for (int n = 0; n < a; n++) { c[n] = n + 1; }
	for (int n = 1; n < a; n++) {
		b = c[n];
		for (int m = n; m < a - 1; m++) { c[m] = c[m + 1]; }
		c[a - 1] = b;
	}
	for (int n = 0; n < a; n++) { cout << c[n] << " "; }
	delete[]c;
	return 0;
}