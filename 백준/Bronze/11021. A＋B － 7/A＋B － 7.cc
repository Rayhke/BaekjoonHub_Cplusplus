#include <iostream>
using namespace std;

int main() {
	int a, b, t;
	int c[100000];
	cin >> t;
	for (int n = 0; n < t; n++) {
		cin >> a >> b;
		c[n] = a + b;
	}
	for (int m = 0; m < t; m++) {
		cout << "Case #" << m + 1 << ": " << c[m];
		if (m < t) {
			cout << "\n";
		}
	}
	return 0;
}