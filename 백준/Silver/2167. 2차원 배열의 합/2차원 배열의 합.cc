#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[300][300] = {}, b, c, d, e[10000] = {}, x[2], y[2];
	cin >> b >> c;
	for (int n = 0; n < b; n++) { for (int m = 0; m < c; m++) { cin >> a[n][m]; } }
	cin >> d;
	for (int n = 0; n < d; n++) {
		cin >> x[0] >> y[0] >> x[1] >> y[1];
		for (int m = x[0] - 1; m < x[1]; m++) { for (int l = y[0] - 1; l < y[1]; l++) { e[n] = e[n] + a[m][l]; } }
	}
	for (int n = 0; n < d; n++) { cout << e[n] << '\n'; }
	return 0;
}