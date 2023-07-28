#include <iostream>
#include <stack>;
using namespace std;

bool r[100][100];

void B(int n, int m, int R, int C) {
	stack <short> x, y; x.push(m); y.push(n);
	while (!x.empty() && !y.empty()) {
		short X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (r[Y][X]) {
			r[Y][X] = 0; short XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			if (XU < C) { x.push(XU); y.push(Y); }
			if (XD > -1) { x.push(XD); y.push(Y); }
			if (YU < R) { x.push(X); y.push(YU); }
			if (YD > -1) { x.push(X); y.push(YD); }
		}
	}
}

int main() {
	char c; int R, C, P = 0; cin >> R >> C;
	for (int n = 0; n < R; n++) {
		for (int m = 0; m < C; m++) {
			cin >> c;
			if (c == '#') { r[n][m] = 1; }
		}
	}
	for (int n = 0; n < R; n++) {
		for (int m = 0; m < C; m++) {
			if (r[n][m]) { P++; B(n, m, R, C); }
		}
	}
	cout << P;
	return 0;
}