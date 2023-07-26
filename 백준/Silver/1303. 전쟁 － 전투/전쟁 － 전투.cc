#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <vector<char>> v(100, vector<char>(100));
bool r[100][100], w;
int W = 0, B = 0;

void V(int m, int n, int M, int N) {
	char C = v[m][n]; int P = 0; stack <int> x, y; x.push(n); y.push(m);
	while (!x.empty() && !y.empty()) {
		int X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (!r[Y][X] && v[Y][X] == C) {
			short int XU = X + 1, XD = X - 1, YU = Y + 1, YD = Y - 1;
			r[Y][X] = 1; P++;
			if (XU < N) { if (!r[Y][XU]) { x.push(XU); y.push(Y); } }
			if (XD > -1) { if (!r[Y][XD]) { x.push(XD); y.push(Y); } }
			if (YU < M) { if (!r[YU][X]) { x.push(X); y.push(YU); } }
			if (YD > -1) { if (!r[YD][X]) { x.push(X); y.push(YD); } }
		}
	}
	if (w) { W += P * P; }
	else { B += P * P; }
}

int main() {
	int N, M; cin >> N >> M;
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) { cin >> v[m][n]; }
	}
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) {
			if (!r[m][n]) {
				if (v[m][n] == 'W') { w = 1; }
				else { w = 0; }
				V(m, n, M, N);
			}
		}
	}
	cout << W << ' ' << B;
	return 0;
}