#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <vector<char>> v(100, vector<char>(100));
stack <int> x; stack <int> y;
bool r[100][100];
bool q[100][100];
int N;

void D(int n, int m) {
	x.push(m); y.push(n); char C = v[n][m];
	while (!x.empty() && !y.empty()) {
		int X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (!r[Y][X]) {
			r[Y][X] = 1;
			if (X + 1 < N) { if (!r[Y][X + 1] && v[Y][X + 1] == C) { x.push(X + 1); y.push(Y); } }
			if (X - 1 > -1) { if (!r[Y][X - 1] && v[Y][X - 1] == C) { x.push(X - 1); y.push(Y); } }
			if (Y + 1 < N) { if (!r[Y + 1][X] && v[Y + 1][X] == C) { x.push(X); y.push(Y + 1); } }
			if (Y - 1 > -1) { if (!r[Y - 1][X] && v[Y - 1][X] == C) { x.push(X); y.push(Y - 1); } }
		}
	}
}

void G(int n, int m) {
	x.push(m); y.push(n); bool L = q[n][m];
	while (!x.empty() && !y.empty()) {
		int X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (r[Y][X]) {
			r[Y][X] = 0;
			if (X + 1 < N) { if (r[Y][X + 1] && q[Y][X + 1] == L) { x.push(X + 1); y.push(Y); } }
			if (X - 1 > -1) { if (r[Y][X - 1] && q[Y][X - 1] == L) { x.push(X - 1); y.push(Y); } }
			if (Y + 1 < N) { if (r[Y + 1][X] && q[Y + 1][X] == L) { x.push(X); y.push(Y + 1); } }
			if (Y - 1 > -1) { if (r[Y - 1][X] && q[Y - 1][X] == L) { x.push(X); y.push(Y - 1); } }
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