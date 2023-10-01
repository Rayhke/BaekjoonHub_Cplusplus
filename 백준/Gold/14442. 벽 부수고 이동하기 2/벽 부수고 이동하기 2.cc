#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool v[1000][1000], r[1000][1000][10];
int N, M, K, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
queue <pair<pair<int, int>, pair<int, int>>> q;

void V() {
	for (int n = 0; n < 10; n++) { r[0][0][n] = 1; }
	q.push({ {0,0},{0,1} });
	while (!q.empty()) {
		int x = q.front().first.second, y = q.front().first.first;
		int P = q.front().second.second, R = q.front().second.first; q.pop();
		if (x == M - 1 && y == N - 1) { cout << P; return; }
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (X < 0 || M <= X || Y < 0 || N <= Y || r[Y][X][R]) { continue; }
			if (R == 0) {
				r[Y][X][0] = 1;
				if (v[Y][X]) { q.push({ {Y,X},{1,P + 1} }); }
				else { q.push({ {Y,X},{0,P + 1} }); }
			}
			else if (!v[Y][X]) {
				r[Y][X][R] = 1;
				q.push({ {Y,X},{R,P + 1} });
			}
			else if (R < K) {
				r[Y][X][R] = 1;
				q.push({ {Y,X},{R + 1,P + 1} });
			}
		}
	}
	cout << -1;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> N >> M >> K;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			char c; cin >> c;
			if (c == 49) { v[n][m] = 1; }
		}
	}
	V();
	return 0;
}
