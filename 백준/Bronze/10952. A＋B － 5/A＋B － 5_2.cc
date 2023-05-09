#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, n = 0, m, add = 1;
	int num[100000] = { 0 };
	while (1) {
		cin >> a >> b;
		num[n] = a + b;
		if (a == 0 && b == 0) {
			break;
		}
		n++;
	}
	for (m = 0; m < n; m++) {
		cout << num[m] << "\n";
	}
	return 0;
}
