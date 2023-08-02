#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> v[10001];
int w[10001], W = 0, R = 0;
bool r[10001];

void V(int S) {
	int Q = 0; queue <int> q; q.push(S); r[S] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; Q++; q.push(Y); }
		}
	}
	w[S] = Q;
	if (W < Q) { W = Q; R = 1; }
	else if (W == Q) { R++; }
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, x, y, P = 0; cin >> N >> M;
	for (int n = 0; n < M; n++) { cin >> y >> x; v[x].push_back(y); }
	for (int n = 1; n <= N; n++) { V(n); fill(r, r + 10002, 0); }
	for (int n = 1; n <= N; n++) { if (w[n] == W) { cout << n << ' '; P++; if (P == R) { break; } } }
	return 0;
}
