#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[51];
int w[51][51], W = 99, P = 0;
bool r[51][51];

void V(int R) {
	int Q = 0; queue <int> q; q.push(R); w[R][R] = 0; r[R][R] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[R][Y]) { r[R][Y] = 1; w[R][Y] = w[R][X] + 1; Q = w[R][Y]; q.push(Y); }
		}
	}
	w[R][R] = Q;
	if (W > Q) { W = Q; P = 1; }
	else if (W == Q) { P++; }
}

int main() {
	int N, M = 0, x, y; cin >> N;
	while (1) {
		cin >> x >> y;
		if (x == -1 || y == -1) {
			if (x + y == -2) { break; }
			else { continue; }
		}
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	for (int n = 1; n <= N; n++) { V(n); }
	cout << W << ' ' << P << '\n';
	for (int n = 1; n <= N; n++) {
		if (w[n][n] == W) { cout << n << ' '; M++; if (M == P) { break; } }
	}
	return 0;
}