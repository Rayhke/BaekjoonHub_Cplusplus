#include <iostream>
#include <queue>
using namespace std;

int A[10001], PX[] = { 1,-1,0,0 }, PY[] = { 0,0,-1,1 };
bool v[101][101];

void V(int n, int m, int N, int M) {
	int Q = 1; queue <pair<int, int>> q; q.push(make_pair(n, m));
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < N && -1 < Y && Y < M) {
				if (!v[Y][X]) { v[Y][X] = 1; Q++; q.push(make_pair(X, Y)); }
			}
		}
	}
	A[Q]++;
}

int main() {
	int M, N, K, x1, y1, x2, y2, P = 0, R = 0; cin >> M >> N >> K;
	for (int n = 0; n < K; n++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int Y = y1; Y < y2; Y++) {
			for (int X = x1; X < x2; X++) { v[Y][X] = 1; }
		}
	}
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) {
			if (!v[m][n]) { v[m][n] = 1; P++; V(n, m, N, M); }
		}
	}
	cout << P << '\n';
	for (int n = 1; n < 10001; n++) {
		for (int m = 0; m < A[n]; m++) {
			cout << n << ' '; R++; if (R == P) { break; }
		}
		if (R == P) { break; }
	}
	return 0;
}