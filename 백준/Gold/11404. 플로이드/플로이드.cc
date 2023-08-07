#include <iostream>
#include <vector>
using namespace std;

const int U = 1e9;
vector <vector<int>> v(101, vector <int>(101, U));

vector <vector<int>> V(int N) {
	vector <vector <int>> d(N, vector<int>(N, U));
	for (int n = 1; n < N; n++) {
		for (int m = 1; m < N; m++) { d[n][m] = v[n][m]; }
		d[n][n] = 0;
	}
	for (int m = 1; m < N; m++) {
		for (int s = 1; s < N; s++) {
			for (int e = 1; e < N; e++) {
				if (d[s][e] > d[s][m] + d[m][e]) { d[s][e] = d[s][m] + d[m][e]; }
			}
		}
	}
	return d;
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, x, y, z; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> y >> x >> z;
		if (v[y][x] > z) { v[y][x] = z; }
	}
	vector <vector<int>> d = V(N + 1);
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			if (d[n][m] != U) { cout << d[n][m] << ' '; }
			else { cout << 0 << ' '; }
		}
		cout << '\n';
	}
	return 0;
}