#include <iostream>
using namespace std;

int main() {
	int a[10][1000] = {}, b, c, d;
	cin >> b;
	for (int n = 0; n < b; n++) { for (int m = 0; m < 10; m++) { cin >> a[m][n]; } }
	for (int n = 0; n < b; n++) {
		for (int m = 0; m < 10; m++) {
			c = m;
			for (int l = m + 1; l < 10; l++) {
				if (a[c][n] < a[l][n]) { c = l; }
			}
			d = a[m][n];
			a[m][n] = a[c][n];
			a[c][n] = d;
		}
	}
	for (int n = 0; n < b; n++) { cout << a[2][n] << endl; }
	return 0;
}