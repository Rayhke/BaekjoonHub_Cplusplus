#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

stack <int> X;
stack <int> Y;
bool r[51][51];

void D(int x, int y, int N, int M) {
	X.push(x); Y.push(y);
	while (!X.empty() && !Y.empty()) {
		int Xs = X.top(), Ys = Y.top(); X.pop(); Y.pop();
		if (r[Ys][Xs]) {
			r[Ys][Xs] = 0;
			if (Xs + 1 < M) { if (r[Ys][Xs + 1]) { X.push(Xs + 1); Y.push(Ys); } }
			if (Xs - 1 > -1) { if (r[Ys][Xs - 1]) { X.push(Xs - 1); Y.push(Ys); } }
			if (Ys + 1 < N) { if (r[Ys + 1][Xs]) { X.push(Xs); Y.push(Ys + 1); } }
			if (Ys - 1 > -1) { if (r[Ys - 1][Xs]) { X.push(Xs); Y.push(Ys - 1); } }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int T, N, M, K, P, x, y; cin >> T;
	for (int n = 0; n < T; n++) {
		cin >> M >> N >> K; P = 0;
		for (int m = 0; m < K; m++) {
			cin >> x >> y;
			r[y][x] = 1;
		}
		for (int m = 0; m < N; m++) {
			for (int l = 0; l < M; l++) {
				if (!r[m][l]) { continue; }
				P++; D(l, m, N, M);
			}
		}
		cout << P << '\n';
	}
	return 0;
}