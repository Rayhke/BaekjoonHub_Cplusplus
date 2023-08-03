#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> v[101];
bool w[101], r[101][101];

void V(int R) {
	queue <int> q; q.push(R); w[R] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n]; r[R][Y] = 1;
			if (!w[Y]) { w[Y] = 1; q.push(Y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int N; cin >> N;
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) { cin >> r[n][m]; }
	}
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			if (r[n][m]) { v[n].push_back(m); }
		}
	}
	for (int n = 1; n <= N; n++) { V(n); fill(w, w + (N + 1), 0); }
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) { cout << r[n][m] << ' '; }
		cout << '\n';
	}
	return 0;
}