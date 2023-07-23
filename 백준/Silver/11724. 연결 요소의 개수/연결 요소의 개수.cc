#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[1001];
bool r[1001];

void B(int n) {
	queue <int> q; q.push(n);
	r[n] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; q.push(Y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, P = 0, x, y; cin >> N >> M;
	if (M != 0) {
		for (int n = 0; n < M; n++) {
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
		for (int n = 1; n <= N; n++) {
			if (!r[n]) { P++; B(n); }
		}
		cout << P;
	}
	else { cout << N; }
	return 0;
}