#include <iostream>
using namespace std;

int main() {
	int a, b, n = 0;
	cin >> a;
	for (int m = 0; m < 5; m++) {
		cin >> b;
		n = (a == b) ? (n + 1) : n;
	}
	cout << n;
	return 0;
}