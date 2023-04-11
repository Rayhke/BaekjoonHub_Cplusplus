#include <iostream>
using namespace std;

int main() {
	int n, m = 0;
	int a[46];
	a[0] = 0; a[1] = 1;
	cin >> n;
	if (n < 2) {
		m = n;
	}
	else if (n > 1) {
		for (int l = 2; l <= n; l++) {
			a[l] = a[l - 1] + a[l - 2];
			m = l;
		}
	}
	cout << a[m];
	return 0;
}