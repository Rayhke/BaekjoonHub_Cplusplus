#include <iostream>
#include <vector>
using namespace std;

int U = 1e9, w[101][101];
vector <vector<int>> v(101, vector <int>(101, U));

void V(int N) {
	for (int n = 1; n < N; n++) {
		for (int m = 1; m < N; m++) { w[n][m] = v[n][m]; }
		w[n][n] = 0;
	}
	for (int m = 1; m < N; m++) {
		for (int s = 1; s < N; s++) {
			for (int e = 1; e < N; e++) {
				if (w[s][e] > w[s][m] + w[m][e]) { w[s][e] = w[s][m] + w[m][e]; }
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, x, y, z; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> y >> x >> z;
		if (v[y][x] > z) { v[y][x] = z; }
	}
	V(N + 1);
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			if (w[n][m] != U) { cout << w[n][m] << ' '; }
			else { cout << 0 << ' '; }
		}
		cout << '\n';
	}
	return 0;
}
