#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int N, M, U = 1e9, w[101][101], W[101][101];
vector <vector<int>> v(101, vector<int>(101, U));
stack <int> s;


void V() {
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) { w[n][m] = v[n][m]; }
		w[n][n] = 0;
	}
	for (int m = 1; m <= N; m++) {
		for (int s = 1; s <= N; s++) {
			for (int e = 1; e <= N; e++) {
				if (w[s][e] > w[s][m] + w[m][e]) { w[s][e] = w[s][m] + w[m][e]; }
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int x, y, z; cin >> N >> M;
	while (M--) {
		cin >> x >> y >> z;
		if (v[x][y] > z) { v[x][y] = z; }
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
			x = m; s.push(x);
			while (1) {
				if (x == n) { break; }
				for (int l = 1; l <= N; l++) {
					if (x == l) { continue; }
					if (w[n][x] - v[l][x] == w[n][l]) { x = l; s.push(x); break; }
				}
			}
			cout << s.size() << ' ';
			while (!s.empty()) { cout << s.top() << ' '; s.pop(); }
			cout << '\n';
		}
	}
	return 0;
}
