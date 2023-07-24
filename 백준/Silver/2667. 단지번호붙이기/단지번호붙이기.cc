#include <iostream>
#include <stack>
using namespace std;

stack <int> x;
stack <int> y;
int N, w[626];
bool r[25][25];

void D(int n, int m) {
	int p = 0; x.push(m); y.push(n);
	while (!x.empty() && !y.empty()) {
		int X = x.top(), Y = y.top(); x.pop(); y.pop();
		if (r[Y][X]) {
			r[Y][X] = 0; p++;
			if (X + 1 < N) { if (r[Y][X + 1]) { x.push(X + 1); y.push(Y); } }
			if (X - 1 > -1) { if (r[Y][X - 1]) { x.push(X - 1); y.push(Y); } }
			if (Y + 1 < N) { if (r[Y + 1][X]) { x.push(X); y.push(Y + 1); } }
			if (Y - 1 > -1) { if (r[Y - 1][X]) { x.push(X); y.push(Y - 1); } }
		}
	}
	w[p]++;
}

int main() {
	char C; int P = 0, K = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			cin >> C;
			if (C == 49) { r[n][m] = 1; }
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			if (r[n][m]) {
				P++; D(n, m);
			}
		}
	}
	cout << P << '\n';
	for (int n = 1; n < 626; n++) {
		for (int m = 0; m < w[n]; m++) { cout << n << '\n'; K++; }
		if (K == P) { break; }
	}
	return 0;
}