#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[15][15] = {}, b, c, d, e[100000] = {};
	cin >> b;
	for (int n = 0; n < 15; n++) { a[0][n] = n + 1; a[n][0] = 1; }
	for (int n = 1; n < 15; n++) {
		for (int m = 1; m < 15; m++) {
			a[n][m] = a[n][m - 1] + a[n - 1][m];
		}
	}
	for (int n = 0; n < b; n++) {
		cin >> c >> d;
		e[n] = a[c][d - 1];
	}
	for (int n = 0; n < b; n++) { cout << e[n] << '\n'; }
	return 0;
}
/* ■ 설명 ■

*/
