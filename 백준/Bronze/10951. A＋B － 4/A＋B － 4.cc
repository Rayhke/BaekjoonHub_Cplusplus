#include <iostream>
using namespace std;

int main() {
	int a, b, n = 0, m;
	int num[100000] = { 0 };
	while (cin >> a) {
		cin >> b;
		num[n] = a + b;
		n++;
	}
	for (m = 0; m < n; m++) {
		cout << num[m] << "\n";
	}
	return 0;
}