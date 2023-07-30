#include <iostream>
#include <queue>
using namespace std;

int P = 0, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,-1,1 };
bool v[500][500];

void V(int m, int n, int M, int N) {
	int Q = 1; queue <pair<int, int>>q; q.push(make_pair(m, n));
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N) {
				if (v[Y][X]) {
					v[Y][X] = 0; Q++; q.push(make_pair(X, Y));
				}
			}
		}
	}
	P = (Q > P) ? Q : P;
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, L = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) { cin >> v[n][m]; }
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (v[n][m]) { L++; v[n][m] = 0; V(m, n, M, N); }
		}
	}
	cout << L << '\n' << P;
	return 0;
}