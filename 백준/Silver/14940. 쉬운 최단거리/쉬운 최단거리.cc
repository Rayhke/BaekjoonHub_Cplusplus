#include <iostream>
#include <queue>
using namespace std;

int w[1000][1000];
bool r[1000][1000];

void B(int m, int n, int M, int N) {
	queue <short> x, y; x.push(m); y.push(n); w[n][m] = 0;
	while (!x.empty() && !y.empty()) {
		short X = x.front(), Y = y.front(); x.pop(); y.pop();
		if (r[Y][X]) {
			r[Y][X] = 0; short XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			if (XU < M) { if (r[Y][XU]) { x.push(XU); y.push(Y); w[Y][XU] = w[Y][X] + 1; } }
			if (XD > -1) { if (r[Y][XD]) { x.push(XD); y.push(Y); w[Y][XD] = w[Y][X] + 1; } }
			if (YU < N) { if (r[YU][X]) { x.push(X); y.push(YU); w[YU][X] = w[Y][X] + 1; } }
			if (YD > -1) { if (r[YD][X]) { x.push(X); y.push(YD); w[YD][X] = w[Y][X] + 1; } }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	short x, y, z; int N, M; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> z;
			if (z != 2) {
				if (z & 1) { r[n][m] = 1; }
			}
			else { x = m; y = n; r[n][m] = 1; }
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (r[n][m]) { w[n][m] = -1; }
		}
	}
	B(x, y, M, N);
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << w[n][m] << ' ';
		}
		cout << '\n';
	}
	return 0;
}