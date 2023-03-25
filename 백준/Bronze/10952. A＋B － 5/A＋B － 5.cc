#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, n, m, add = 1;
	int num[100000] = { 0 };
	for (n = 0; add > 0;) {
		cin >> a >> b;
		num[n] = a + b;
		if (a > 0 && b > 0) {
			add = 1;
		}
		else {
			add = 0;
		}
		n++;
	}
	for (m = 0; m < n - 1; m++) {
		cout << num[m] << "\n";
	}
	return 0;
}