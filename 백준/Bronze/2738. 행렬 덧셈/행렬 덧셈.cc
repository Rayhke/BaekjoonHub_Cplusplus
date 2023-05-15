#include <iostream>
using namespace std;

int main() {
	int a[100][100] = {}, b[100][100] = {}, n, m;
	cin >> n >> m;
	for (int c = 0; c < n; c++) { for (int d = 0; d < m; d++) { cin >> a[c][d]; } }
	for (int c = 0; c < n; c++) { for (int d = 0; d < m; d++) { cin >> b[c][d]; } }
	for (int c = 0; c < n; c++) {
		for (int d = 0; d < m; d++) { cout << a[c][d] + b[c][d] << " "; }
		cout << endl;
	}
	return 0;
}