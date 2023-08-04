#include <iostream>
#include <queue>
using namespace std;

int PX[] = { 0,1,1,1,0,-1,-1,-1 }, PY[] = { -1,-1,0,1,1,1,0,-1 };
bool r[250][250];

void V(int m, int n, int M, int N) {
	queue <pair<int, int>> q; q.push(make_pair(m, n)); r[n][m] = 1;
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second; q.pop();
		for (int n = 0; n < 8; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (-1 < X && X < M && -1 < Y && Y < N) {
				if (r[Y][X]) { r[Y][X] = 0; q.push(make_pair(X, Y)); }
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, L = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) { cin >> r[n][m]; }
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (r[n][m]) { L++; V(m, n, M, N); }
		}
	}
	cout << L;
	return 0;
}