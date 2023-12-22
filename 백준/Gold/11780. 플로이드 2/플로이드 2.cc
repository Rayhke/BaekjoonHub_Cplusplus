#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, U = 1e9, w[101][101], W[101][101];
vector <vector<int>> v(101, vector<int>(101, U));
queue <int> q;

void V() {
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) { w[n][m] = v[n][m]; }
		w[n][n] = 0;
	}
	for (int m = 1; m <= N; m++) {
		for (int s = 1; s <= N; s++) {
			for (int e = 1; e <= N; e++) {
				if (w[s][e] > w[s][m] + w[m][e]) {
					w[s][e] = w[s][m] + w[m][e];
					W[s][e] = W[s][m];
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int x, y, z; cin >> N >> M;
	while (M--) {
		cin >> x >> y >> z;
		if (v[x][y] > z) { v[x][y] = z; W[x][y] = y; }
	}
	V();
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			if (w[n][m] != U) { cout << w[n][m] << ' '; }
			else { cout << "0 "; }
		}
		cout << '\n';
	}
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			if (n == m || w[n][m] == U) { cout << "0\n"; continue; }
			x = n; y = m; q.push(x);
			while (1) {
				if (x == y) { break; }
				q.push(W[x][y]); x = W[x][y];
			}
			cout << q.size() << ' ';
			while (!q.empty()) { cout << q.front() << ' '; q.pop(); }
			cout << '\n';
		}
	}
	return 0;
}