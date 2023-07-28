#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[501];
short w[501];
bool r[501];

void B() {
	queue <int> q; q.push(1); r[1] = 1; w[1] = 0;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; w[Y] = w[X] + 1; q.push(Y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, P = 0, x, y; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); } B();
	for (int n = 2; n <= N; n++) { if (r[n] && w[n] < 3) { P++; } }
	cout << P;
	return 0;
}