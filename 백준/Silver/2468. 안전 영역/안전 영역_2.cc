#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <vector<int>> v(100, vector<int>(100));
bool r[100][100], q = 0;

void V(int n, int m, int N, int H) {
	stack <int> x, y; x.push(m); y.push(n);
	while (!x.empty() && !y.empty()) {
		short X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (r[Y][X] == q && v[Y][X] > H) {
			r[Y][X] = !q; short XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			if (XU < N) { if (r[Y][XU] == q) { x.push(XU); y.push(Y); } }
			if (XD > -1) { if (r[Y][XD] == q) { x.push(XD); y.push(Y); } }
			if (YU < N) { if (r[YU][X] == q) { x.push(X); y.push(YU); } }
			if (YD > -1) { if (r[YD][X] == q) { x.push(X); y.push(YD); } }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	short O = 0, P = 0, Q = 0; int N; cin >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			cin >> v[n][m];
			O = (v[n][m] > O) ? v[n][m] : O;
		}
	}
	for (int H = 0; H < O; H++) {
		Q = 0;
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < N; m++) {
				if (r[n][m] == q && v[n][m] > H) {
					Q++; V(n, m, N, H);
				}
			}
		}
		P = (Q > P) ? Q : P; q = !q;
	}
	cout << P;
	return 0;
}
