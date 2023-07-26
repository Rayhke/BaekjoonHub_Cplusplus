#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <vector<char>> v(100, vector<char>(100));
stack <int> x, y;
bool r[100][100];
bool q[100][100];
int N;

void D(int n, int m) {
	x.push(m); y.push(n); char C = v[n][m];		// main 에서 ' n ' 와 ' m ' 의 역할과 여기서 ' x ' 와 ' y ' 역할이 헷갈렸음 (거꾸로)
	while (!x.empty() && !y.empty()) {
		int X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (!r[Y][X] && v[Y][X] == C) {
			r[Y][X] = 1;
			if (X + 1 < N) { if (!r[Y][X + 1]) { x.push(X + 1); y.push(Y); } }
			if (X - 1 > -1) { if (!r[Y][X - 1]) { x.push(X - 1); y.push(Y); } }
			if (Y + 1 < N) { if (!r[Y + 1][X]) { x.push(X); y.push(Y + 1); } }
			if (Y - 1 > -1) { if (!r[Y - 1][X]) { x.push(X); y.push(Y - 1); } }
		}
	}
}

void G(int n, int m) {
	x.push(m); y.push(n); bool L = q[n][m];
	while (!x.empty() && !y.empty()) {
		int X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (r[Y][X] && q[Y][X] == L) {
			r[Y][X] = 0;
			if (X + 1 < N) { if (r[Y][X + 1]) { x.push(X + 1); y.push(Y); } }
			if (X - 1 > -1) { if (r[Y][X - 1]) { x.push(X - 1); y.push(Y); } }
			if (Y + 1 < N) { if (r[Y + 1][X]) { x.push(X); y.push(Y + 1); } }
			if (Y - 1 > -1) { if (r[Y - 1][X]) { x.push(X); y.push(Y - 1); } }
		}
	}
}


int main() {
	int P = 0, Q = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			cin >> v[n][m];
			if (v[n][m] == 'B') { q[n][m] = 1; }
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			if (!r[n][m]) { P++; D(n, m); }
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			if (r[n][m]) { Q++; G(n, m); }
		}
	}
	cout << P << ' ' << Q;
	return 0;
}
