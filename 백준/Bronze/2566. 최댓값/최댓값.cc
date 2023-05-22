#include <iostream>
using namespace std;

int main() {
	int a[9][9] = {}, b = 0, c = 0, d = 0;
	for (int n = 0; n < 9; n++) {
		for (int m = 0; m < 9; m++) {
			cin >> a[n][m];
			if (a[n][m] > b) {
				b = a[n][m]; c = n; d = m;
			}
		}
	}
	cout << b << "\n" << (c + 1) << " " << (d + 1);
	return 0;
}