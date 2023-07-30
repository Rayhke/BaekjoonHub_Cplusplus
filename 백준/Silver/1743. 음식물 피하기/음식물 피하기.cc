#include <iostream>
#include <queue>
using namespace std;

int P = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,-1,1 };
bool v[101][101];

void V(int m, int n, int M, int N) {
	int Q = 1; queue <pair<int, int>> q; q.push(make_pair(m, n));
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (0 < X && X <= M && 0 < Y && Y <= N) {
				if (v[Y][X]) { v[Y][X] = 0; Q++; q.push(make_pair(X, Y)); }
			}
		}
	}
	P = (Q > P) ? Q : P;
}

int main() {
	int N, M, K, x, y; cin >> N >> M >> K;
	for (int n = 0; n < K; n++) { cin >> x >> y; v[x][y] = 1; }
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= M; m++) {
			if (v[n][m]) { v[n][m] = 0; V(m, n, M, N); }
		}
	}
	cout << P;
	return 0;
}