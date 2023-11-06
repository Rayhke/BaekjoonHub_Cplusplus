#include <iostream>
#include <vector>
using namespace std;

int N, U = 1e9, v[501];
vector <vector<int>> w(501, vector<int>(501, 0));

int main() {
	ios::sync_with_stdio(false);
	int r, c; cin >> N;
	for (int n = 0; n < N; n++) { cin >> r >> c; v[n] = r; v[n + 1] = c; }
	for (int n = 2; n < N + 1; n++) {
		for (int m = 1; m < N - n + 2; m++) {
			int j = m + n - 1; w[m][j] = U;
			for (int l = m; l < j; l++) {
				int P = w[m][l] + w[l + 1][j] + (v[m - 1] * v[l] * v[j]);
				if (w[m][j] > P) { w[m][j] = P; }
			}
		}
	}
	cout << w[1][N];
	return 0;
}