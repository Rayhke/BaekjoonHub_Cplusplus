#include <iostream>
#include <stack>
using namespace std;

bool v[50][50];

void V(int n, int m, int N, int M) {
	stack <int> x, y; x.push(n); y.push(m);
	while (!x.empty() && !y.empty()) {
		int X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (v[Y][X]) {
			v[Y][X] = 0;
			int XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			if (XU < N) { if (v[Y][XU]) { x.push(XU); y.push(Y); } }
			if (XD > -1) { if (v[Y][XD]) { x.push(XD); y.push(Y); } }
			if (YU < M) { if (v[YU][X]) { x.push(X); y.push(YU); } }
			if (YD > -1) { if (v[YD][X]) { x.push(X); y.push(YD); } }
			if (XU < N && YU < M) { if (v[YU][XU]) { x.push(XU); y.push(YU); } }
			if (XU < N && YD > -1) { if (v[YD][XU]) { x.push(XU); y.push(YD); } }
			if (XD > -1 && YU < M) { if (v[YU][XD]) { x.push(XD); y.push(YU); } }
			if (XD > -1 && YD > -1) { if (v[YD][XD]) { x.push(XD); y.push(YD); } }
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
	int X, Y, P = 0;
	while (1) {
		cin >> X >> Y; P = 0;
		if (X + Y == 0) { break; }
		for (int n = 0; n < Y; n++) {
			for (int m = 0; m < X; m++) {
				cin >> v[n][m];
			}
		}
		for (int n = 0; n < Y; n++) {
			for (int m = 0; m < X; m++) {
				if (v[n][m]) { P++; V(m, n, X, Y); }
			}
		}
		cout << P << '\n';
	}
	return 0;
}