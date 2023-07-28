#include <iostream>
#include <queue>
using namespace std;

char v[601][601];
bool r[600][600];
int P = 0;

void V(int m, int n, int M, int N) {
	queue <short> x, y; x.push(m); y.push(n);
	while (!x.empty() && !y.empty()) {
		short X = x.front(), Y = y.front(); x.pop(); y.pop();
		if (!r[Y][X]) {
			r[Y][X] = 1; short XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			if (v[Y][X] == 'P') { P++; }
			if (XU < M) { if (!r[Y][XU]) { x.push(XU); y.push(Y); } }
			if (XD > -1) { if (!r[Y][XD]) { x.push(XD); y.push(Y); } }
			if (YU < N) { if (!r[YU][X]) { x.push(X); y.push(YU); } }
			if (YD > -1) { if (!r[YD][X]) { x.push(X); y.push(YD); } }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	char c; short x, y; int N, M; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> v[n][m];
			if (v[n][m] != 'X') {
				if (v[n][m] == 'I') { x = m; y = n; }
			}
			else { r[n][m] = 1; }
		}
	}
	V(x, y, M, N);
	if (P != 0) { cout << P; }
	else { cout << "TT"; }
	return 0;
}